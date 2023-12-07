#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Point.hpp"
#include <doctest.h>

TEST_CASE("Test point constructors") {
  Point p1;
  Point p2(3, 2);
  CHECK(p1.to_str() == "(0.000000, 0.000000)");
  CHECK(p2.to_str() == "(3.000000, 2.000000)");
}

TEST_CASE("Test addition") {
  Point p1(3, 4);
  Point p2(2, 3);
  CHECK((p1 + p2).to_str() == "(5.000000, 7.000000)");
}

TEST_CASE("Test subtraction") {
  Point p1(5, 3);
  Point p2(2, 1);
  CHECK((p1 - p2).to_str() == "(3.000000, 2.000000)");
}
