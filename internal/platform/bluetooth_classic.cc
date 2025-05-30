// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "internal/platform/bluetooth_classic.h"

#include "internal/platform/logging.h"
#include "internal/platform/mutex_lock.h"

namespace nearby {

BluetoothClassicMedium::~BluetoothClassicMedium() {
  if (!observer_list_.empty()) {
    impl_->RemoveObserver(this);
  }
  StopDiscovery();
}

BluetoothSocket BluetoothClassicMedium::ConnectToService(
    BluetoothDevice& remote_device, const std::string& service_uuid,
    CancellationFlag* cancellation_flag) {
  NEARBY_LOG(INFO,
             "BluetoothClassicMedium::ConnectToService: device=%p [impl=%p]",
             &remote_device, &remote_device.GetImpl());
  return BluetoothSocket(impl_->ConnectToService(
      remote_device.GetImpl(), service_uuid, cancellation_flag));
}

bool BluetoothClassicMedium::StartDiscovery(DiscoveryCallback callback) {
  MutexLock lock(&mutex_);
  if (discovery_enabled_) {
    NEARBY_LOG(INFO, "BT Discovery already enabled; impl=%p", &GetImpl());
    return false;
  }
  bool success = impl_->StartDiscovery({
      .device_discovered_cb =
          [this](api::BluetoothDevice& device) {
            MutexLock lock(&mutex_);
            auto pair = devices_.emplace(
                &device, absl::make_unique<DeviceDiscoveryInfo>());
            auto& context = *pair.first->second;
            if (!pair.second) {
              NEARBY_LOG(INFO, "Adding (again) device=%p, impl=%p",
                         &context.device, &device);
              return;
            }
            context.device = BluetoothDevice(&device);
            NEARBY_LOG(INFO, "Adding device=%p, impl=%p", &context.device,
                       &device);
            if (!discovery_enabled_) return;
            discovery_callback_.device_discovered_cb(context.device);
          },
      .device_name_changed_cb =
          [this](api::BluetoothDevice& device) {
            MutexLock lock(&mutex_);
            auto& context = *devices_[&device];
            NEARBY_LOG(INFO, "Renaming device=%p, impl=%p", &context.device,
                       &device);
            if (!discovery_enabled_) return;
            discovery_callback_.device_name_changed_cb(context.device);
          },
      .device_lost_cb =
          [this](api::BluetoothDevice& device) {
            MutexLock lock(&mutex_);
            auto item = devices_.extract(&device);
            auto& context = *item.mapped();
            NEARBY_LOG(INFO, "Removing device=%p, impl=%p", &context.device,
                       &device);
            if (!discovery_enabled_) return;
            discovery_callback_.device_lost_cb(context.device);
          },
  });
  if (success) {
    discovery_callback_ = std::move(callback);
    devices_.clear();
    discovery_enabled_ = true;
    NEARBY_LOG(INFO, "BT Discovery enabled; impl=%p", &GetImpl());
  }
  return success;
}

bool BluetoothClassicMedium::StopDiscovery() {
  MutexLock lock(&mutex_);
  if (!discovery_enabled_) return true;
  discovery_enabled_ = false;
  discovery_callback_ = {};
  devices_.clear();
  NEARBY_LOG(INFO, "BT Discovery disabled: impl=%p", &GetImpl());
  return impl_->StopDiscovery();
}

void BluetoothClassicMedium::AddObserver(Observer* observer) {
  MutexLock lock(&mutex_);
  if (observer_list_.empty()) {
    impl_->AddObserver(this);
  }
  observer_list_.AddObserver(observer);
}
void BluetoothClassicMedium::RemoveObserver(Observer* observer) {
  MutexLock lock(&mutex_);
  observer_list_.RemoveObserver(observer);
  if (observer_list_.empty()) {
    impl_->RemoveObserver(this);
  }
}

// api::BluetoothClassicMedium::Observer methods
void BluetoothClassicMedium::DeviceAdded(api::BluetoothDevice& device) {
  BluetoothDevice bt_device(&device);
  for (auto* observer : observer_list_.GetObservers()) {
    observer->DeviceAdded(bt_device);
  }
}
void BluetoothClassicMedium::DeviceRemoved(api::BluetoothDevice& device) {
  BluetoothDevice bt_device(&device);
  for (auto* observer : observer_list_.GetObservers()) {
    observer->DeviceRemoved(bt_device);
  }
}
void BluetoothClassicMedium::DeviceAddressChanged(
    api::BluetoothDevice& device, absl::string_view old_address) {
  BluetoothDevice bt_device(&device);
  for (auto* observer : observer_list_.GetObservers()) {
    observer->DeviceAddressChanged(bt_device, old_address);
  }
}
void BluetoothClassicMedium::DevicePairedChanged(api::BluetoothDevice& device,
                                                 bool new_paired_status) {
  BluetoothDevice bt_device(&device);
  for (auto* observer : observer_list_.GetObservers()) {
    observer->DevicePairedChanged(bt_device, new_paired_status);
  }
}
void BluetoothClassicMedium::DeviceConnectedStateChanged(
    api::BluetoothDevice& device, bool connected) {
  BluetoothDevice bt_device(&device);
  for (auto* observer : observer_list_.GetObservers()) {
    observer->DeviceConnectedStateChanged(bt_device, connected);
  }
}

}  // namespace nearby
