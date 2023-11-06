#pragma once

#include <string>
#include <vector>

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);

    static bool equals(const Card& c1, const Card& c2);
    static std::vector<Card> build_deck();

    std::string to_string() const;
};

