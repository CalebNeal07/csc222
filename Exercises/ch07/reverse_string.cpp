#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reverse_string(string&);

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    reverse_string(alphabet);

    cout << alphabet << endl;

    return EXIT_SUCCESS;
}

void reverse_string(string& text) {
    reverse(text.begin(), text.end());
}