load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Abseil
http_archive(
    name = "com_google_absl",
    urls = ["https://github.com/abseil/abseil-cpp/archive/refs/tags/20211102.0.tar.gz"],
    sha256 = "dcf71b9cba8dc0ca9940c4b316a0c796be8fab42b070bb6b7cab62b48f0e66c4",
    strip_prefix = "abseil-cpp-20211102.0",
)

# GFlags
http_archive(
  name = "com_github_gflags_gflags",
  urls = ["https://github.com/gflags/gflags/archive/v2.2.2.tar.gz"],
  sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
  strip_prefix = "gflags-2.2.2",
)

# GLog
http_archive(
    name = "com_google_glog",
    urls = ["https://github.com/google/glog/archive/refs/tags/v0.5.0.tar.gz"],
    sha256 = "eede71f28371bf39aa69b45de23b329d37214016e2055269b3b5e7cfd40b59f5",
    strip_prefix = "glog-0.5.0",
)
