#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Complex.hpp"
#include <doctest.h>
using namespace std;

TEST_CASE("Test default constructor") {
  Complex c;
  CHECK(c.get_real() == 0);
  CHECK(c.get_imag() == 0);
  CHECK(c.str_cartesian() == "0.000000 + 0.000000i");
}

TEST_CASE("Test paramaterized constructor") {
  Complex c(3, 4);
  CHECK(c.get_real() == 3);
  CHECK(c.get_imag() == 4);
  CHECK(c.str_cartesian() == "3.000000 + 4.000000i");
}

TEST_CASE("Test addition") {
  Complex c1(2, 3);
  Complex c2(1, 5);
  Complex result = c1 + c2;
  CHECK(result.get_real() == 3);
  CHECK(result.get_imag() == 8);
}

TEST_CASE("Test subtraction") {
  Complex c1(2, 3);
  Complex c2(1, 5);
  Complex result = c1 - c2;
  CHECK(result.get_real() == 1);
  CHECK(result.get_imag() == -2);
}

TEST_CASE("Test multiplication") {
  Complex c1(2, 3);
  Complex c2(1, 5);
  Complex result = c1 * c2;
  CHECK(result.get_real() == -13);
  CHECK(result.get_imag() == 13);
}

TEST_CASE("Test absolute value") {
  Complex c(-2, -3);
  Complex result = c.abs();
  assert(result.get_real() == 2);
  assert(result.get_imag() == 3);
}
