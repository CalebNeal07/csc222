#include <cstdlib> 
#include <iostream>
using namespace std;

void wont_swap(char, char);
void will_swap(char&, char&);
void will_swap_with_pointers(char*, char*);

int main() {
  char x = 'x';
  char y = 'y';

  cout << "Inputs:" << endl;
  cout << "\tx | " << long(&x) << endl;
  cout << "\ty | " << long(&y) << endl;

  cout << "wont_swap" << endl;
  wont_swap(x, y);

  cout << "will_swap" << endl;
  will_swap(x, y);

  cout << "will_swap_with_pointers" << endl;
  will_swap_with_pointers(&x, &y);
  
  return EXIT_SUCCESS;
}

void wont_swap(char a, char b)
{
    cout << "\ta: " << a << "  b: " << b << endl;
    cout << "\taddress of a: " << long(&a) << endl;
    cout << "\taddress of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "\ta: " << a << "  b: " << b << endl;
}

void will_swap(char& a, char& b)
{
    cout << "\ta: " << a << "  b: " << b << endl;
    cout << "\taddress of a: " << long(&a) << endl;
    cout << "\taddress of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "\ta: " << a << "  b: " << b << endl;
}

void will_swap_with_pointers(char* a, char* b)
{
    cout << "\ta: " << *a << "  b: " << *b << endl;
    cout << "\taddress of a: " << long(a) << endl;
    cout << "\taddress of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "\ta: " << *a << "  b: " << *b << endl;
}