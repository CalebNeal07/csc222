#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    Time *x = new Time(447.0);

    cout << x->convert_to_seconds() << endl;

    x->increment(47);

    cout << x->convert_to_seconds() << endl;

    return EXIT_SUCCESS;
}