#include "Hand.h"

Hand::Hand(Deck& deck, int N)
{
    for (int i = 0; i < N; i++)
    {
        // add N amount of cards to hand from deck
        hand.push_back(deck.drawCard());
    }
}

std::string Hand::strHand()
{
    std::stringstream theHand;
    for (int i = 0 ; i < getHandSize() ; i++)
    {
        // for each card in the deck, display it
        theHand << "[" << i + 1 << "]" << hand.at(i).strCard() << " " ;
    }
    // return string
    return theHand.str();
}

Card Hand::dealCard(int num)
{
    // get card at that number
    Card deal = hand.at(num-1);
    // remove the card from the hand deck
    hand.erase(hand.begin() + (num-1));
    // return the picked card
    return deal;
}

int Hand::getHandSize()
{
    // retrun hand size
    return static_cast<int>(hand.size());
}
