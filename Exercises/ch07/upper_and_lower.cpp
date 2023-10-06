#include <iostream>
using namespace std;

string string_to_upper(string);
string string_to_lower(string);

int main() {
    string alphabet = "aBcDefgHijklMnOpqRstuVwXyZ";

    cout << string_to_upper(alphabet) << endl;
    cout << string_to_lower(alphabet) << endl;

    return EXIT_SUCCESS;
}

string string_to_upper(string str) {
    string out = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] <= 'z' && str[i] >= 'a') {
            out += str[i] - 32;
        } else {
            out += str[i];
        }
    }

    return out;
}

string string_to_lower(string str) {
    string out = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            out += str[i] + 32;
        } else {
            out += str[i];
        }
    }

    return out;
}