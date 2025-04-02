#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {

  // 1. Create a deck of cards and shuffle it.
    Deck deck;
    deck.shuffle();
  // 2. Create two players, each one with 6 cards in their hand.
    Player computer(deck, 6);
    Player human(deck, 6);
  // 3. Play six rounds. In each round:
    for (int i = 0; i < 6; i++)
    {
        cout << "Round " << i+1 << endl ;
        //    - Have computer deal a card from their hand.
        Card compDealt = computer.hand.dealCard(rand() % computer.hand.getHandSize() + 1);
        cout << "The computer plays: " << compDealt.strCard() << endl;
        //    - Show human their hand of cards so that they can make a selection.
        cout << "Your hand: " << human.hand.strHand() << endl;
        //    - Have human deal their card
        int choice;
        cout << "What card do you want to play? " ;
        cin >> choice;
        Card humDealt = human.hand.dealCard(choice);
        cout << "You played: " << humDealt.strCard() << endl;
        //    - Determine who won the round and update points accordingly.
        if (compDealt.getValue() > humDealt.getValue())
        {
            computer.score += compDealt.getValue() + humDealt.getValue();

        }
        else if (compDealt.getValue() < humDealt.getValue())
        {
            human.score += compDealt.getValue() + humDealt.getValue();
        }
        else
            cout << "Tie!";
        //    - Print results for current round.
        cout << "Current scores:" << endl;
        cout << "Human: " << human.score << endl;
        cout << "Computer: " << computer.score << endl;
    }
  // 4. Print final game results.
    cout << "FINAL SCORE:" << endl;
    cout << "Human: " << human.score << endl;
    cout << "Computer: " << computer.score << endl;
    if (computer.score > human.score)
    {
        cout << "Computer has won!" << endl;

    }
    else if (computer.score < human.score)
    {
        cout << "Human has won!" << endl;
    }
    else
        cout << "Tie!";


  return 0;
}
