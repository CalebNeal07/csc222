#include <iostream>
#include <string>
using namespace std;

void count_letter(string, char);
void count_letter_with_find(string, char);

int main() {
    count_letter("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 't');
    count_letter_with_find("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 'i');

    return EXIT_SUCCESS;
}

void count_letter(string str, char letter) {
    int count = 0;
    int index = 0;

    while (index < str.length()) {
        if (str[index] == letter) {
            count = count + 1;
        }
        index = index + 1;
    }
    cout << count << endl;
}

void count_letter_with_find(string str, char letter) {
    int count = 0;
    int index = 0;


    while (index < str.length()) {
        int i = str.find(letter, index);

        if (i == -1) {
            break;
        } 

        count++;
        index = i + 1;
    }
    cout << count << endl; 
}