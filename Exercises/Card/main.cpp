#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;

int main() {
    Deck deck = Deck();

    cout << deck << endl;

    return EXIT_SUCCESS;
}