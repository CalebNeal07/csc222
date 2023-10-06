#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void sumNums(float, float);
void sumNums(float, float, float);
void sumNums(int, int);
void sumNums(int, int, int);
void sumNums(int, float);

int main() {
    srand(time(nullptr));

    int x = rand();
    int y = rand();
    int z = rand();

    float p = rand() / rand();
    float q = rand() / rand();
    float r = rand() / rand();

    sumNums(p, q);
    sumNums(p, q, r);
    sumNums(x, y);
    sumNums(x, y, z);
    sumNums(x, p);

    return EXIT_SUCCESS;
}

void sumNums(float a, float b) {
    cout << a + b << endl;
}

void sumNums(float a, float b, float c) {
    cout << a + b + c << endl;
}

void sumNums(int a, int b) {
    cout << a + b << endl;
}

void sumNums(int a, int b, int c) {
    cout << a + b + c << endl;
}

void sumNums(int a, float b) {
    cout << a + b << endl;
}