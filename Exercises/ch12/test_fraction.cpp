#include "Fraction.h"
#include <iostream>
#include <random>

using namespace std;

int main() {
    srand(time(nullptr));

    Fraction frac1 = Fraction(rand() % 1000, rand() % 1000);
    Fraction frac2 = Fraction(rand() % 1000, rand() % 1000);

    frac1.simplify();
    frac2.simplify();

    cout << "Our two fractions are:" << endl << "\t";
    frac1.print();
    cout << "\t";
    frac2.print();

    cout << "Adding them gives ";
    (frac1 + frac2).print();

    cout << "Subtracting them gives ";
    (frac1 - frac2).print();

    cout << "Multiplying them gives ";
    (frac1 * frac2).print();

    cout << "Dividing them gives ";
    (frac1 / frac2).print();

    return EXIT_SUCCESS;
}