#include "Fraction.h"

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int greatest_common_denominator(int a, int b);

Fraction::Fraction() {
  this->numerator = 0;
  this->denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
  this->numerator = numerator;
  this->denominator = denominator;
}

Fraction::Fraction(const Fraction &frac) {
  this->numerator = frac.numerator;
  this->denominator = frac.denominator;
}

void Fraction::print() {
  cout << numerator << "/" << denominator << endl;
}

void Fraction::simplify() {
  int factor = greatest_common_denominator(this->numerator, this->denominator);

  this->numerator /= factor;
  this->denominator /= factor;
}

Fraction Fraction::operator+(Fraction const& f) {
  auto result = Fraction();

  auto gcd = greatest_common_denominator(this->denominator, f.denominator);

  result.denominator = ( this->denominator * f.denominator ) / gcd;

  result.numerator = ( this->numerator * result.denominator ) / this->denominator +
                     ( f.numerator * result.denominator ) / f.denominator;

  result.simplify();

  return result;
}

Fraction Fraction::operator-(Fraction const& f) {
  return *this + (Fraction(-1, 1) * f);
}

Fraction Fraction::operator*(Fraction const& f) {
  auto result = Fraction(this->numerator * f.numerator, this->denominator * f.denominator);
  result.simplify();
  return result;
}

Fraction Fraction::operator/(Fraction const& f) {
  Fraction result = *this * Fraction(f.denominator, f.numerator);
  result.simplify();
  return result;
}

bool Fraction::operator==(Fraction const& f) {
  Fraction a = Fraction(*this);
  Fraction b = Fraction(f);

  a.simplify();
  b.simplify();

  if (a.numerator == b.numerator && a.denominator == b.denominator) return true;
  return false; 
}

int greatest_common_denominator(int a, int b) {
  if (a == 0) 
        return b; 
    return greatest_common_denominator(b % a, a); 
}
