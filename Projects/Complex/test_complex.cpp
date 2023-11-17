/**
 * Authors: Caleb O'Neal & Shangwen Cheng
 * Date: November 14, 2023
 * Course: CSC 222: Object-Oriented Programming
 */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "complex.hpp"
#include "doctest.h"
using namespace std;

Complex complex_1 = Complex(2, 3);
Complex complex_2 = Complex(5, 3);

TEST_CASE("Test to_string for Complex") {
  CHECK(complex_1.to_string() == "2 + 3i");
}

TEST_CASE("Test addition with Complex for Complex") {
  CHECK((complex_1 + complex_2).to_string() == Complex(7, 6).to_string());
}

TEST_CASE("Test addition with double for Complex") {
  CHECK((complex_1 + 2).to_string() == Complex(4, 3).to_string());
}

TEST_CASE("Test subtraction with Complex for Complex") {
  CHECK((complex_2 - complex_1).to_string() == Complex(3, 0).to_string());
}

TEST_CASE("Test subtraction with double for Complex") {
  CHECK((complex_2 - 3).to_string() == Complex(2, 3).to_string());
}

TEST_CASE("Test multiplication with Complex for Complex") {
  CHECK((complex_1 * complex_2).to_string() == Complex(1, 21).to_string());
}

TEST_CASE("Test multiplication with double for Complex") {
  CHECK((complex_1 * 4).to_string() == Complex(8, 12).to_string());
}

TEST_CASE("Test division with Complex for Complex") {
  CHECK((complex_2 / complex_1).to_string() ==
        Complex(1.461538, -0.692308).to_string());
}

TEST_CASE("Test division with double for Complex") {
  CHECK((complex_2 / 2).to_string() == Complex(2.5, 1.5).to_string());
}
