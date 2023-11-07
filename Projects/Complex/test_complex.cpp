#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "complex.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Test can create and render MyObject") {
  Complex complex = Complex();
  CHECK(complex.to_string() == "0");
}
