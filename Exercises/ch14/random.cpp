#include "random.hpp"
#include <random>

int random_between(int l, int h) {
  std::srand(time(nullptr));

  if (l - h == 0) {
    return l;
  }

  int num = rand() % l - h;

  return num + l;
}
