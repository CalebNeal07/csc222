#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void print_twice(char phil);

int main() {
  double a = 42;
  string b = "A string";
  int c = 42;

  print_twice(a);
  print_twice(b);
  print_twice(c);

  /*
  Because C++ is a statically typed language when you try to pass a double as a char the compiler will look for a  
  way to convert a double to a char. The conversion for any number to char is to check if it's a whole number and if so use that as an ASCII code.
  There is no conversion for string to char so the compiler returns an error.   
  */ 
 
  return EXIT_SUCCESS; 
} 
 
void print_twice(char phil) { 
  cout << phil << phil << endl; 
} 
