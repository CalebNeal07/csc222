#include <vector>
#include <iostream>
#include "Card.h"

using namespace std;

struct Deck {
    vector<Card> cards;

    Deck(); 
    Deck(int n);
    Deck(vector<Card> cards);

    int find_card(const Card& card);

    friend ostream& operator<<(ostream& os, const Deck& deck);
};
