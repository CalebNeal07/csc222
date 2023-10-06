#include <iostream>
using namespace std;

void print_multiples(int, int);
void print_mult_table(int);

int main() {
    print_mult_table(16);

    return EXIT_SUCCESS;
}

void print_mult_table(int high)
{
    int i = 1;
    while (i <= high) {
        print_multiples(i, high);
        i = i + 1;
    }
}

void print_multiples(int n, int upper)
{
    int i = 1;
    while (i <= upper) {
        cout << n * i << "   ";
        i = i + 1;
    }
    cout << endl;
}