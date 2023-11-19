#include "Card.hpp"

Card::Card() {
  suit = 0;
  rank = 0;
}

Card::Card(int s, int r) {
  suit = s;
  rank = r;
}

bool Card::equals(const Card &c1, const Card &c2) {
  return c1.rank == c2.rank && c1.suit == c2.suit;
}

std::string Card::to_string() const {
  std::vector<std::string> suit_strings = {"Clubs", "Diamonds", "Hearts",
                                           "Spades"};
  std::vector<std::string> rank_strings = {"",     "2",     "3",    "4",  "5",
                                           "6",    "7",     "8",    "9",  "10",
                                           "Jack", "Queen", "King", "Ace"};

  return rank_strings[rank] + " of " + suit_strings[suit];
}

static std::vector<Card> build_deck() {
  std::vector<Card> deck(52);

  int i = 0;
  for (int suit = 0; suit <= 3; suit++) {
    for (int rank = 1; rank <= 13; rank++) {
      deck[i].suit = suit;
      deck[i].rank = rank;
      i++;
    }
  }

  return deck;
}
