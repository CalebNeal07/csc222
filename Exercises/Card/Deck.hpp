#include "Card.hpp"
#include <iostream>
#include <vector>

using namespace std;

struct Deck {
  vector<Card> cards;

  Deck();
  Deck(int n);
  Deck(vector<Card> cards);

  int find_card(const Card &card);
  void swap_cards(int a, int b);
  int find_lowest(int l, int h);

  void sort();
  void merge_sort();

  friend ostream &operator<<(ostream &os, const Deck &deck);
};
