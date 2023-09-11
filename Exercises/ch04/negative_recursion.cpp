#include <cstdlib>
#include <iostream>
using namespace std;

void countdown(int n);

int main() {
  countdown(-10); // This will recurse infinitely. This can be fixed by changing line 14 to "n <= 0."

  return EXIT_SUCCESS;
}

void countdown(int n) {
  if (n == 0) {
    cout << n << endl;
  } else {
    cout << n << endl;
    countdown(n-1);
  }
}
