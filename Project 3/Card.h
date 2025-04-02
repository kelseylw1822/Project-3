#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{
public:
    enum Color
    {
        purple,
        orange,
        black
    };
    Card() : rank(0), color(Color::purple), value(0) {} ;
    Card(int r, Color c);
    std::string strCard();
    int getRank();
    Color getColor();
    int getValue();
private:
    int rank;
    Color color;
    int value;
};

#endif // CARD_H_

