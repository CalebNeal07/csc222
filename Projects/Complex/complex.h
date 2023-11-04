#include <string>
using namespace std;

struct Complex {
    double real;
    double imaginary;

    Complex();

    string to_string();

    Complex operator+(Complex i);
    Complex operator+(int i);
    Complex operator+(double i);
    
    Complex operator-(Complex i);
    Complex operator-(int i);
    Complex operator-(double i);

    Complex operator*(Complex i);
    Complex operator*(int i);
    Complex operator*(double i);

    Complex operator/(Complex i);
    Complex operator/(int i);
    Complex operator/(double i);

    Complex operator^(Complex i);
    Complex operator^(int i);
    Complex operator^(double i);

    Complex operator==(Complex i);
    Complex operator==(int i);
    Complex operator==(double i);

    Complex sqrt();
};