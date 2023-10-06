#include <iostream>
using namespace std;

int main() {
    int age;

    cin >> age;

    if (age > 16 && age < 65) {
        cout << "Age is within normal working age." << endl;
    }

    return EXIT_SUCCESS;
}