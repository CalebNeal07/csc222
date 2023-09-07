#include <iostream>
#include <math.h>
using namespace std;

/* 
Without the following line the compiler will not recognize that the function new_linw() exists and will output 

adding_new_functions.cpp:7:3: error: use of undeclared identifier 'new_line'
  new_line();
  ^
1 error generated.

This line tells the compiler to trust us and that the function exists somewhere in the program.
*/

void new_line(); 

int main() {
  cout << "First Line." << endl;
  new_line();
  cout << "Second Line." << endl;
  return 0;
}

void new_line() {
  cout << endl;
}
