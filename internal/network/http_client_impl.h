// Copyright 2022-2023 Google LLC
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

#ifndef THIRD_PARTY_NEARBY_INTERNAL_NETWORK_HTTP_CLIENT_IMPL_H_
#define THIRD_PARTY_NEARBY_INTERNAL_NETWORK_HTTP_CLIENT_IMPL_H_

#include <functional>
#include <future>  // NOLINT
#include <memory>
#include <vector>

#include "absl/base/thread_annotations.h"
#include "internal/network/http_client.h"
#include "internal/network/http_request.h"
#include "internal/platform/mutex.h"
#include "internal/platform/single_thread_executor.h"

namespace nearby {
namespace network {

class NearbyHttpClient : public HttpClient {
 public:
  NearbyHttpClient() = default;
  ~NearbyHttpClient() override = default;

  NearbyHttpClient(const NearbyHttpClient&) = default;
  NearbyHttpClient& operator=(const NearbyHttpClient&) = default;
  NearbyHttpClient(NearbyHttpClient&&) = default;
  NearbyHttpClient& operator=(NearbyHttpClient&&) = default;

  void StartRequest(const HttpRequest& request,
                    std::function<void(const absl::StatusOr<HttpResponse>&)>
                        callback) override ABSL_LOCKS_EXCLUDED(mutex_);

  void StartCancellableRequest(
      std::unique_ptr<CancellableRequest> request,
      std::function<void(const absl::StatusOr<HttpResponse>&)> callback)
      override ABSL_LOCKS_EXCLUDED(mutex_);

  // Gets HTTP response in synchronization mode.
  absl::StatusOr<HttpResponse> GetResponse(const HttpRequest& request) override;

 private:
  void CleanThreads() ABSL_SHARED_LOCKS_REQUIRED(mutex_);
  static absl::StatusOr<HttpResponse> InternalGetResponse(
      const HttpRequest& request);

  Mutex mutex_;
  SingleThreadExecutor executor_;
  std::vector<std::future<void>> http_threads_ ABSL_GUARDED_BY(mutex_);
};

}  // namespace network
}  // namespace nearby

#endif  // THIRD_PARTY_NEARBY_INTERNAL_NETWORK_HTTP_CLIENT_IMPL_H_
