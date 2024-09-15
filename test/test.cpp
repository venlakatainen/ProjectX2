#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  /*Your code here*/
  FuzzedDataProvider fuzzed_data(data, size);

  float num1 = fuzzed_data.ConsumeFloatingPoint<double>();
  float num2 = fuzzed_data.ConsumeFloatingPoint<double>();
  std::string oper = fuzzed_data.ConsumeRandomLengthString();
  calculator(num1, oper[0], num2);
}
