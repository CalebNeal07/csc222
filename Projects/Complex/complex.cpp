/**
 * Authors: Caleb O'Neal & Shangwen Cheng
 * Date: November 14, 2023
 * Course: CSC 222: Object-Oriented Programming
 */
#include "complex.hpp"

Complex::Complex() {
  this->real = 0;
  this->imaginary = 0;
}

Complex::Complex(int r, int i) {
  this->real = r;
  this->imaginary = i;
}

Complex::Complex(double r, double i) {
  this->real = r;
  this->imaginary = i;
}

Complex::Complex(const Complex &c) {
  this->real = c.real;
  this->imaginary = c.imaginary;
}

string clean_float_to_string(double n) {
  string str = std::to_string(n);
  str.erase(str.find_last_not_of('0') + 1, string::npos);
  str.erase(str.find_last_not_of('.') + 1, string::npos);
  return str;
}

string Complex::to_string() {
  return clean_float_to_string(this->real) + " + " +
         clean_float_to_string(this->imaginary) + "i";
}

Complex Complex::operator+(const Complex &i) {
  return Complex(this->real + i.real, this->imaginary + i.imaginary);
}

Complex Complex::operator+(const double &i) {
  return Complex(this->real + i, this->imaginary);
}

Complex Complex::operator-(const Complex &i) {
  return Complex(this->real - i.real, this->imaginary - i.imaginary);
}

Complex Complex::operator-(const double &i) {
  return Complex(this->real - i, this->imaginary);
}

Complex Complex::operator*(const Complex &i) {
  return Complex(this->real * i.real - this->imaginary * i.imaginary,
                 this->real * i.imaginary + this->imaginary * i.real);
}

Complex Complex::operator*(const double &i) {
  return Complex(this->real * i, this->imaginary * i);
}

Complex Complex::operator/(const Complex &i) {
  double a = this->real;
  double b = this->imaginary;
  double c = i.real;
  double d = i.imaginary;

  return Complex(((a * c) + (b * d)) / ((c * c) + (d * d)),
                 ((b * c) - (a * d)) / ((c * c) + (d * d)));
}

Complex Complex::operator/(const double &i) {
  return Complex(this->real / i, this->imaginary / i);
}

bool Complex::operator==(const Complex &i) {
  return this->real == i.real && this->imaginary == i.imaginary;
}
