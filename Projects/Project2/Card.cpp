#include "Card.h"

Card::Card(char n)
{
    setNum(n);
    count++;
}

void Card::setNum(char n)
{
    if (n<1 || n>108)
    {
        number = 1;
    }else 
        number = n;
}

char Card::faceVal()
{
    char fValue[] = {};
}








