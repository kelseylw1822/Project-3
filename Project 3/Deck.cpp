#include "Deck.h"

Deck::Deck()
{
    // add 15 purples cards
    for (int i = 1; i < 16; i++)
    {
        deck.push_back(Card(i, Card::Color::purple));
    }
    // add 10 orange cards
    for (int i = 1; i < 11; i++)
    {
        deck.push_back(Card(i, Card::Color::orange));
    }
    // add 5 black cards
    for (int i = 6; i < 11; i++)
    {
        deck.push_back(Card(i, Card::Color::black));
    }
}

void Deck::shuffle()
{
    // shuffle deck
    unsigned timeseed = 0;
    std::shuffle(deck.begin(), deck.end(), std::default_random_engine(timeseed);
}

Card Deck::drawCard()
{
    // draw a card from deck
    Card drawn = deck.at(0);
    // get rid of card from deck
    deck.erase(deck.begin());
    // return drawn card
    return drawn;
}

int Deck::getDeckSize()
{
    // retrun deck size 
    return static_cast<int>(deck.size());
}
