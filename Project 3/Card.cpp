#include "Card.h"
#include <sstream>

Card::Card(int r, Color c)
{
    rank = r;
    color = c;
    // assign Card correct value based on color and rank;
    if (color == Color::purple)
    {
        value = rank;
    }
    else if (color == Color::orange)
    {
        value = 2 * rank;
    }
    else
    {
        value = 3 * rank;
    }
}

std::string Card::strCard()
{
    std::stringstream theString;
    std::string col;
    // turn Color into a string
    switch(color)
    {
        case Color::purple:
            col = "purple";
            break;
        case Color::orange:
            col = "orange";
            break;
        case Color::black:
            col = "black";
            break;
    }
    theString << col << ":" << rank;
    // return the card as a string
    return theString.str();
}

int Card::getRank()
{
    return rank;
}

Card::Color Card::getColor()
{
    return color;
}

int Card::getValue()
{
    return value;
}

