#include "Deck.hpp"

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

Deck::Deck(int n) { this->cards = vector<Card>(n); }

Deck::Deck(vector<Card> cards) { this->cards = cards; }

int Deck::find_card(const Card &card) {
  for (int i = 0; i < this->cards.size(); i++) {
    if (Card::equals(this->cards[i], card))
      return i;
  }
  return -1;
}

ostream &operator<<(ostream &os, const Deck &deck) {
  for (const auto d : deck.cards) {
    os << d.to_string();
    os << '\n';
  }

  return os;
}

void Deck::swap_cards(int a, int b) {
  Card tmp = this->cards[a];

  this->cards[a] = this->cards[b];
  this->cards[b] = tmp;
}

int Deck::find_lowest(int l, int h) {
  int lowest = this->cards[l].rank;
  int index = l;

  for (int i = 0; i < h - l; i++) {
    if (this->cards[i + l].rank < lowest) {
      lowest = this->cards[i + l].rank;
      index = i + l;
    }
  }

  return index;
}

void Deck::sort() {
  for (int i = 0; i < cards.size(); i++) {
    int low = this->find_lowest(0, i);

    this->swap_cards(i, low);
  }
}
/*
void Deck::merge_sort() {
  if (self->cards.size <= 1) {
    return;
  }

  Deck()
}
*/
