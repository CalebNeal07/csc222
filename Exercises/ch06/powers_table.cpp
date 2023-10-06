#include <iostream>
using namespace std;

int main() {
    int x = 0;
    while (x < 17) {
        cout << x << "\t" << pow(2, x) << endl;
        x++;
    }

    return EXIT_SUCCESS;
}