#include "../inc/ScalarConverter.h"

bool isChar(const std::string &literal) {
  return literal.length() == 1 && !std::isdigit(literal[0]);
}

bool isInt(const std::string &literal) {
  if (literal.find('.') != std::string::npos)
    return false;
  char *end;
  strtol(literal.c_str(), &end, 10);
  return *end == '\0';
}

bool isFloat(const std::string &literal) {
  if (literal[literal.length() - 1] == 'f' &&
      literal.find('.') != std::string::npos)
    return true;
  return false;
}

bool isDouble(const std::string &literal) {
  if (literal.find('.') != std::string::npos &&
      literal[literal.length() - 1] != 'f')
    return true;
  return false;
}

bool isPseudoLiteral(const std::string &literal) {
  if (literal == "nan" || literal == "nanf" || literal == "+inf" ||
      literal == "+inff" || literal == "-inf" || literal == "-inff" ||
      literal == "inf" || literal == "inff")
    return true;
  return false;
}
