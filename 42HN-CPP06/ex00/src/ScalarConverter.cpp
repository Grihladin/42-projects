#include "../inc/ScalarConverter.h"

static void printSpecial(std::string s) {
  std::cout << "char: impossible\n";
  std::cout << "int: impossible\n";
  std::cout << "float: " << s << "f\n";
  std::cout << "double: " << s << "\n";
}

static void printDouble(std::string s) {
  std::cout << "char: impossible\n";
  std::cout << "int: " << static_cast<int>(std::stod(s)) << "\n";
  std::cout << "float: " << s << "f\n";
  std::cout << "double: " << s << "\n";
}

static void printChar(std::string s) {
  char c = s[0];
  std::cout << "char: '" << c << "'\n";
  std::cout << "int: " << static_cast<int>(c) << "\n";
  std::cout << "float: " << std::fixed << std::setprecision(1)
            << static_cast<float>(c) << "f\n";
  std::cout << "double: " << std::fixed << std::setprecision(1)
            << static_cast<double>(c) << "\n";
}

static void printFloat(std::string s) {
  std::cout << "char: impossible\n";
  std::cout << "int: " << static_cast<int>(std::stof(s)) << "\n";
  std::cout << "float: " << s << std::endl;
  std::cout << "double: " << std::fixed << std::setprecision(1)
            << static_cast<double>(std::stof(s)) << "\n";
}

static void printInt(std::string s) {
  int i = std::stoi(s);
  if (i < 0 || i > 127 || !std::isprint(i)) {
    std::cout << "char: Non displayable\n";
  } else {
    std::cout << "char: '" << static_cast<char>(i) << "'\n";
  }
  std::cout << "int: " << i << "\n";
  std::cout << "float: " << std::fixed << std::setprecision(1)
            << static_cast<float>(i) << "f\n";
  std::cout << "double: " << std::fixed << std::setprecision(1)
            << static_cast<double>(i) << "\n";
}

void ScalarConverter::convert(const std::string &literal) {
  if (isChar(literal)) {
    std::cout << "Detected type: char" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    printChar(literal);
    return;
  } else if (isDouble(literal)) {
    std::cout << "Detected type: double" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    printDouble(literal);
    return;
  } else if (isPseudoLiteral(literal)) {
    std::cout << "Detected type: pseudo literal" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    printSpecial(literal);
    return;
  } else if (isFloat(literal)) {
    std::cout << "Detected type: float" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    printFloat(literal);
    return;
  } else if (isInt(literal)) {
    std::cout << "Detected type: int" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    printInt(literal);
    return;
  } else {
    std::cout << "Error: Invalid literal" << std::endl;
  }
}
