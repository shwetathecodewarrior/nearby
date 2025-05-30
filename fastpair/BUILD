# Copyright 2022 Google LLC
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
package_group(
    name = "nearby_fastpair",
    packages = [
        "//fastpair/...",
    ],
)

cc_library(
    name = "fast_pair_controller",
    srcs = ["fast_pair_controller.cc"],
    hdrs = ["fast_pair_controller.h"],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = ["//:__subpackages__"],
    deps = [
        "//fastpair/common",
        "//fastpair/handshake",
        "//fastpair/message_stream",
        "//internal/base",
        "//internal/platform:comm",
        "//internal/platform:types",
        "@com_google_absl//absl/functional:any_invocable",
        "@com_google_absl//absl/status",
    ],
)

cc_test(
    name = "fast_pair_controller_test",
    size = "small",
    srcs = [
        "fast_pair_controller_test.cc",
    ],
    deps = [
        ":fast_pair_controller",
        "//fastpair/message_stream:fake_provider",
        "//internal/platform:test_util",
        "//internal/platform/implementation/g3",  # build_cleaner: keep
        "@com_github_protobuf_matchers//protobuf-matchers",
        "@com_google_absl//absl/strings",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_library(
    name = "fast_pair_seeker",
    hdrs = ["fast_pair_seeker.h"],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = ["//:__subpackages__"],
    deps = [
        "//fastpair/common",
        "@com_google_absl//absl/functional:any_invocable",
        "@com_google_absl//absl/status",
    ],
)

cc_library(
    name = "fast_pair_plugin",
    hdrs = ["fast_pair_plugin.h"],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = ["//:__subpackages__"],
    deps = [
        ":fast_pair_events",
        ":fast_pair_seeker",
    ],
)

cc_library(
    name = "fast_pair_events",
    hdrs = ["fast_pair_events.h"],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = ["//:__subpackages__"],
    deps = [
    ],
)

cc_library(
    name = "fast_pair_service",
    srcs = ["fast_pair_service.cc"],
    hdrs = ["fast_pair_service.h"],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = ["//:__subpackages__"],
    deps = [
        ":fast_pair_plugin",
        ":fast_pair_seeker",
        "//fastpair/internal",
        "//fastpair/repository:device_repository",
        "//internal/platform:types",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
    ],
)

cc_test(
    name = "fast_pair_service_test",
    size = "small",
    srcs = [
        "fast_pair_service_test.cc",
    ],
    deps = [
        ":fast_pair_events",
        ":fast_pair_service",
        "//fastpair/internal",
        "//fastpair/message_stream:fake_provider",
        "//fastpair/plugins:fake_fast_pair_plugin",
        "//fastpair/server_access:test_support",
        "//internal/platform:logging",
        "//internal/platform:test_util",
        "//internal/platform/implementation/g3",  # build_cleaner: keep
        "@com_github_protobuf_matchers//protobuf-matchers",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_library(
    name = "test_support",
    testonly = True,
    hdrs = [
        "mock_fast_pair_seeker.h",
    ],
    visibility = [
        "//fastpair:__subpackages__",
    ],
    deps = [
        ":fast_pair_seeker",
        "@com_google_absl//absl/status",
        "@com_google_googletest//:gtest_for_library_testonly",
    ],
)
