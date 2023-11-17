/**
 * Authors: Caleb O'Neal & Shangwen Cheng
 * Date: November 14, 2023
 * Course: CSC 222: Object-Oriented Programming
 */
#include <string>
using namespace std;

struct Complex {
  double real;
  double imaginary;

  Complex();
  Complex(int r, int i);
  Complex(double r, double i);
  Complex(const Complex &c);

  string to_string();

  Complex operator+(const Complex &i);
  Complex operator+(const double &i);

  Complex operator-(const Complex &i);
  Complex operator-(const double &i);

  Complex operator*(const Complex &i);
  Complex operator*(const double &i);

  Complex operator/(const Complex &i);
  Complex operator/(const double &i);

  bool operator==(const Complex &i);
};
