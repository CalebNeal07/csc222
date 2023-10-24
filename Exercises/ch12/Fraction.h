struct Fraction {
  int numerator;
  int denominator;

  Fraction();
  Fraction(int numerator, int denominator);
  Fraction(const Fraction &frac);

  Fraction operator+(Fraction const& f);
  Fraction operator-(Fraction const& f);
  Fraction operator*(Fraction const& f);
  Fraction operator/(Fraction const& f);
  bool operator==(Fraction const& f);

  void simplify();
  void print(); 
};
