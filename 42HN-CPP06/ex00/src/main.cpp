#include "../inc/ScalarConverter.h"
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
    return 1;
  }
  std::cout << "---------------------------------------------------------------" << std::endl;
  ScalarConverter::convert(argv[1]);
  std::cout << "---------------------------------------------------------------" << std::endl;
  return 0;
}
