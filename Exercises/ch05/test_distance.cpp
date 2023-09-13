#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <random>
#include <iostream>
using namespace std;

double distance(double x1, double y1, double x2, double y2);

int main() {
  srand(time(nullptr));

  double x_1 = (rand() % 10000);
  double y_1 = (rand() % 10000);

  double x_2 = (rand() % 10000);
  double y_2 = (rand() % 10000);

  cout << "The distance between (" << x_1 << ", " << y_1 << ") and (" << x_2 << ", " << y_2 << ") is " << distance(x_1, y_1, x_2, y_2) << ".";

  return EXIT_SUCCESS;
}

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}
