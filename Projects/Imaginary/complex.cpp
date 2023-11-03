#include "complex.h"

Complex::Complex() {
  this->real = 0;
  this->imaginary = 0;
}

string clean_float_to_string(double n) {
  string str = std::to_string(n);
  str.erase(str.find_last_not_of('0') + 1, std::string::npos);
  str.erase(str.find_last_not_of('.') + 1, std::string::npos);
  return str;
}

string Complex::to_string() { return clean_float_to_string(this->real); }
