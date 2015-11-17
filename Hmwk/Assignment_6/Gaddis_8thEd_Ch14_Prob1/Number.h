/* 
 * File:   Numbers.h
 * Author: Eduardo Rangel
 *
 * Created on November 5, 2015, 9:19 AM
 */

#ifndef NUMBERS_H
#define	NUMBERS_H
#include <string>

using namespace std;

class Number
{
    private:
        
     int number;  
        
    
    public:
        Number(int);
        void print();
        virtual ~Number();
        
};


#endif	/* NUMBERS_H */

