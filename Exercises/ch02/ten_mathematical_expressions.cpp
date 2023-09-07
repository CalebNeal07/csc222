#include <cstdlib>
#include <iostream>
#include <random>
using namespace std;

void randomize_nums();

int x;
int y;

float a;
float b;

int main() {

  randomize_nums();
  cout << "The sum of " << x << " and " << y << " is " << x + y << "." << endl;

  randomize_nums();
  cout << "The difference between " << x << " and " << y << " is " << x - y << "." << endl;

  randomize_nums();
  cout << "The product of " << x << " and " << y << " is " << x * y << "." << endl;

  randomize_nums();
  cout << "The quotient of " << x << " over " << y << " is " << x / y << "." << endl;

  randomize_nums();
  cout << "The remainder of " << x << " and " << y << " is " << x % y << "." << endl;

  a = 0.1;
  b = 0.2;
  cout << "The sum of " << a << " and " << b << " is " << a + b << "." << endl;

  a = 0.5;
  b = 0.4;
  cout << "The difference between " << a << " and " << b << " is " << a - b << "." << endl;

  b = 0.75;
  cout << "The product of " << a << " and " << b << " is " << a * b << "." << endl;

  randomize_nums();
  cout << x << " to the " << y << " power is " << pow(x, y) << "." << endl;

  randomize_nums();
  cout << "The square root of " << x << " is " << sqrt(x) << "." << endl;

  return EXIT_SUCCESS;
}

void randomize_nums() {
  x = rand() % 100;
  y = rand() % 100;
}
