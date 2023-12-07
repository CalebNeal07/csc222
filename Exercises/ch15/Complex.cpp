#include "Complex.hpp"
#include <cmath>

Complex::Complex() {
  real = 0;
  imag = 0;
  polar = false;
}

Complex::Complex(double r, double i) {
  real = r;
  imag = i;
  polar = false;
}

Complex::Complex(double m, double t, Flag f) {
  polar = true;
  mag = m;
  theta = t;
}

double Complex::get_real() { return real; }

double Complex::get_imag() { return imag; }

void Complex::calculate_polar() {
  mag = sqrt(real * real + imag * imag);
  theta = atan(imag / real);
  polar = true;
}

double Complex::get_mag() {
  if (polar == false)
    calculate_polar();
  return mag;
}

double Complex::get_theta() {
  if (polar == false)
    calculate_polar();
  return theta;
}

string Complex::str_cartesian() {
  return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
}

string Complex::str_polar() {
  string theta = to_string(get_theta());
  string mag = to_string(get_mag());
  return mag + "e^" + theta + "i";
}

Complex Complex::operator+(const Complex &c) {
  return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex &c) {
  return Complex(real - c.real, imag - c.imag);
}

ostream &operator<<(ostream &os, const Complex &c) {
  os << c.real << " + " << c.imag << "i";
  return os;
}

void Complex::calculate_cartesian() {
  assert(polar == true);
  real = mag * cos(theta);
  imag = mag * sin(theta);
}

Complex Complex::operator*(Complex &c) {
  if (polar == true)
    calculate_cartesian();
  if (c.polar == true)
    c.calculate_cartesian();
  return Complex((real * c.real) - (imag * c.imag),
                 (imag * c.real) + (real * c.imag));
}

Complex Complex::abs() { return Complex(std::abs(real), std::abs(imag)); }
