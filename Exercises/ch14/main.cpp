#include "random.hpp"
#include <iostream>

int main() {
  for (int i = 0; i < 10; i++) {
    srand(time(NULL));

    int l = rand() % 100;
    int r = rand() % 100;

    std::cout << i << ": Lower: " << l << ", Upper: " << r << "\t"
              << random_between(l, r) << std::endl;
  }
}
