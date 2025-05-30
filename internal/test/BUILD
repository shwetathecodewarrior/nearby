# Copyright 2023 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

licenses(["notice"])

cc_library(
    name = "test",
    srcs = [
        "fake_clock.cc",
        "fake_single_thread_executor.cc",
        "fake_task_runner.cc",
        "fake_timer.cc",
    ],
    hdrs = [
        "fake_clock.h",
        "fake_device_info.h",
        "fake_single_thread_executor.h",
        "fake_task_runner.h",
        "fake_timer.h",
    ],
    copts = [
        "-Ithird_party",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//internal/base:bluetooth_address",
        "//internal/platform:types",
        "//internal/platform/implementation:types",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/time",
        "@com_google_absl//absl/types:span",  # fixdeps: keep
    ],
)

cc_test(
    name = "test_test",
    size = "small",
    timeout = "short",
    srcs = [
        "fake_clock_test.cc",
        "fake_device_info_test.cc",
        "fake_task_runner_test.cc",
        "fake_timer_test.cc",
    ],
    copts = [
        "-Ithird_party",
    ],
    shard_count = 8,
    deps = [
        ":test",
        "//internal/platform:types",
        "//internal/platform/implementation:types",
        "//internal/platform/implementation/g3",
        "@com_github_protobuf_matchers//protobuf-matchers",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/time",
        "@com_google_googletest//:gtest_main",
    ],
)
