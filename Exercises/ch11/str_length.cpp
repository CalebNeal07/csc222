#include <iostream>
using namespace std;

int str_len(char*);

int main() {
    char* alphabet = "abcdefghijklmnopqrstuvwxyz";

    cout << alphabet << endl << str_len(alphabet);

    return EXIT_SUCCESS;
}

int str_len(char* str) {
    int i;

    for (i = 0; *(str + i) != 0; i++) {}

    return i;
}