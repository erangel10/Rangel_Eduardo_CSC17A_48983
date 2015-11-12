/* 
 * File:   Card.h
 * Author: rcc
 *
 * Created on November 12, 2015, 10:04 AM
 */

#ifndef CARD_H
#define	CARD_H
#include <string>

using namespace std;

class Card 
{
    private:
        char number;
        void setNum(char);
        static int count;
        static string back; //background 
        
    public:
        Card(char);
        char getNum(){return number;}
        char numVal();
        char suit();
        char faceVal();
        static int getCnt(){return count;}
        static string getBack(){return back;}
        
        
    
};


#endif	/* CARD_H */

