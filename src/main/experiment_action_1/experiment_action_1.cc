#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "glog/logging.h"

ABSL_FLAG(std::string, input, "", "String input.");

int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);
  std::string input_string = absl::GetFlag(FLAGS_input);

  CHECK(input_string == "DESIRED")
    << "Failed to match the string: " << input_string;

  return 0;
}
