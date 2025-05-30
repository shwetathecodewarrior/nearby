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
    name = "retroactive",
    srcs = [
        "retroactive.cc",
    ],
    hdrs = [
        "retroactive.h",
    ],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = [
        "//:__subpackages__",
        "//fastpair:__subpackages__",
    ],
    deps = [
        "//fastpair:fast_pair_controller",
        "//fastpair/common",
        "//fastpair/message_stream",
        "//internal/platform:comm",
        "//internal/platform:types",
        "//third_party/magic_enum",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
    ],
)

cc_test(
    name = "retroactive_test",
    size = "small",
    srcs = [
        "retroactive_test.cc",
    ],
    deps = [
        ":retroactive",
        "//fastpair/message_stream:fake_gatt_callbacks",
        "//fastpair/message_stream:fake_provider",
        "//fastpair/proto:fastpair_cc_proto",
        "//fastpair/server_access:test_support",
        "//internal/base:bluetooth_address",
        "//internal/platform:base",
        "//internal/platform:comm",
        "//internal/platform:logging",
        "//internal/platform:test_util",
        "//internal/platform/implementation/g3",  # build_cleaner: keep
        "@com_github_protobuf_matchers//protobuf-matchers",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@com_google_googletest//:gtest_main",
    ],
)
