#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void increment(Time&, double);

int main() {
    Time x = {
        2, 
        30, 
        9.1
    };

    cout << x.hour << "\t" << x.minute << "\t" << x.second << endl;

    increment(x, 4730.2);

    cout << x.hour << "\t" << x.minute << "\t" << x.second << endl;

    return EXIT_SUCCESS;
}

void increment(Time& time, double secs) { // The compiler throws an error if secs is const.
    time.hour += (int) secs / 3600;
    secs -= 3600 * ( (int) secs / 3600 );

    time.minute += (int) secs / 60; 
    secs -= 60 * ( (int) secs / 60 );

    time.second += secs;
}
