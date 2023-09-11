#include <stdlib.h>
#include <iostream>
using namespace std;

void compare(int a, int b);

int main() {
  compare(5, 3);
  compare(4, 7);
  compare(9, 9);
}

void compare(int a, int b) {
  if (a < b) {
    cout << a << " is less than " << b << "." << endl;
  } else if (a > b) {
    cout << a << " is greater than " << b << "." << endl;
  } else {
    cout << a << " is equal to " << b << "." << endl;
  }
}
