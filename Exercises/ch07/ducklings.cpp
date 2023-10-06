#include <iostream>
#include <string>
using namespace std;

int main() {
    string suffix = "ack";

    char letter = 'J';
    while (letter <= 'Q') {
        string extra = "";

        if (letter == 'O' || letter == 'Q') {
            extra = "u";
        }

        cout << letter + extra + suffix << endl;

        extra = "";
        letter++;
    }

    return EXIT_SUCCESS;
}