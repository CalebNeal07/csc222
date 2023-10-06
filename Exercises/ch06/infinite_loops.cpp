#include <iostream>
using namespace std;

void loop_forever(int);
void recurse_forever(int);

int main() {
    /*
        Both functions run forever. 
        The call stack is stuck returning to the beggining od the function 
        because there is no way for it to achieve a state where it can escape
        without quitting the program.
    */

    loop_forever(1);
    recurse_forever(1);

    return EXIT_SUCCESS;
}

void loop_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}

void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}
