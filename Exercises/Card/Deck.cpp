#include "Deck.h"

Deck::Deck() {
    std::vector<Card> deck(52);

    int i = 0;
    for (int suit = 0; suit <= 3; suit++) {
        for (int rank = 1; rank <= 13; rank++) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }

    this->cards = deck;
}

Deck::Deck(int n) {
    this->cards = vector<Card>(n);
}

Deck::Deck(vector<Card> cards) {
    this->cards = cards;
}

int Deck::find_card(const Card& card) {
    for (int i = 0; i < this->cards.size(); i++) {
        if (Card::equals(this->cards[i], card)) return i;
    }
    return -1;
}

ostream& operator<<(ostream& os, const Deck& deck) {
    for (const auto d : deck.cards) {
        os << d.to_string();
        os << '\n';
    }

    return os;
}