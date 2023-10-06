#include <iostream>
using namespace std;

void sequence(int);

int main() {
    sequence(23);
    cout << "---------------------------------------" << endl;
    sequence(47);

    return EXIT_SUCCESS;
}

void sequence(int n)
{
   while (n != 1) {
       cout << n << endl;
       if (n%2 == 0) {      // n is even
           n = n / 2;
       } else {             // n is odd
           n = n * 3 + 1;
       }
   }
}