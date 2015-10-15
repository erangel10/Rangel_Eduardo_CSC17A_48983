/* 
 * File:   card.h
 * Author: rcc
 *
 * Created on October 15, 2015, 11:59 AM
 */

#ifndef CARD_H
#define	CARD_H
class card{
    private:
        char number;

    public:
        card(char);
        char suit(char);
        char numVal(char);
        char faceVal(char);
    
    
};


#endif	/* CARD_H */

