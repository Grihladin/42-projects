#pragma once
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <iostream>
#include <string>

class ScalarConverter {
private:
  ScalarConverter() = delete;
  ScalarConverter(const ScalarConverter &copy) = delete;
  ScalarConverter &operator=(const ScalarConverter &assign) = delete;
  ~ScalarConverter() = delete;

public:
  static void convert(const std::string &literal);
};

bool isChar(const std::string &s);
bool isInt(const std::string &s);
bool isFloat(const std::string &s);
bool isDouble(const std::string &s);
bool isPseudoLiteral(const std::string &s);
