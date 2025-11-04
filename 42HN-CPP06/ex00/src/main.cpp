#include "../inc/ScalarConverter.h"
#include <iostream>

// // tests
// #include <vector>
// void runTests() {
//   std::vector<std::string> testLiterals = {
//       // Char tests
//       "'a'", // char
//       "'Z'", // char uppercase
//       "' '", // char space
//       "'0'", // char digit

//       // Int tests
//       "42",          // int positive
//       "-42",         // int negative
//       "0",           // int zero
//       "2147483647",  // int max
//       "-2147483648", // int min

//       // Float tests
//       "3.14f",         // float positive
//       "-3.14f",        // float negative
//       "0.0f",          // float zero
//       "42.0f",         // float without decimal precision
//       "3.402823e+38f", // near float max

//       // Double tests
//       "2.718",  // double positive
//       "-2.718", // double negative
//       "0.0",    // double zero
//       "42.0",   // double without decimal precision

//       // Special values (pseudo literals)
//       "nan",   // NaN
//       "nanf",  // NaN float
//       "inf",   // positive infinity
//       "inff",  // positive infinity float
//       "+inf",  // positive infinity explicit
//       "+inff", // positive infinity float explicit
//       "-inf",  // negative infinity
//       "-inff", // negative infinity float

//       // Overflow cases
//       "1e309.0", // double overflow to infinity
//       "1e39f",   // float overflow to infinity

//       // Edge cases
//       "127", // max printable ASCII
//       "128", // beyond printable ASCII
//       "-1",  // negative (non-displayable char)
//       "32",  // space character as int
//       "31",  // non-printable control character

//       // Invalid
//       "hello",  // invalid string
//       "123abc", // invalid mixed
//       ".123",   // missing leading digit
//       "123.",   // missing trailing digit
//       ""        // empty string
//   };

//   for (const auto &literal : testLiterals) {
//     std::cout << "Testing literal: " << literal << std::endl;
//     ScalarConverter::convert(literal);
//     std::cout << std::endl;
//   }
// }

int main(int argc, char **argv) {
  // runTests();
  if (argc != 2 || argv[1][0] == '\0') {
    std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
    return 1;
  }
  std::cout << "---------------------------------------------------------------"
            << std::endl;
  ScalarConverter::convert(argv[1]);
  std::cout << "---------------------------------------------------------------"
            << std::endl;
  return 0;
}
