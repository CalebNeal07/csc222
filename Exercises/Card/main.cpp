#include "Card.hpp"
#include "Deck.hpp"
#include <iostream>
using namespace std;

int main() {
  Deck deck = Deck();

  cout << deck << endl;

  Card card = Card(2, 6);

  cout << card.to_string() << " is at " << deck.find_card(card);

  return EXIT_SUCCESS;
}
