#include <iostream>
#include <random>
using namespace std;

void shuffle(int*, int*);
void print_array(int*, int);

int main() {
    srand(time(nullptr));

    int x [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    print_array(&x[0], 15);

    shuffle(begin(x), end(x));

    print_array(&x[0], 15);

    return EXIT_SUCCESS;
}

void shuffle(int* start, int* end) {
    for (int i = 0; i < end - start; i++) {
        swap(*(start + (rand() % (end - start))), *(start + (rand() % (end - start))));
    }
}

void print_array(int* start, int length) {
    for (int i = 0; i < length; i++) {
        cout << *(start + i) << ", ";
    }

    cout << endl;
}