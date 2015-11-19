/* 
 * File:   Month.h
 * Author: admin
 *
 * Created on November 19, 2015, 10:02 AM
 */

#ifndef MONTH_H
#define	MONTH_H
#include <string>

using namespace std;

class Month
{
    private:
        string name;//name of month
        int monthNum;//month number 
    
    public:
        Motnh(){monthNum = 1, name = "January";};
        Month(string);
        Month(int);
        string getName(){return name;}
        int getMonthN(){return monthNum;}
        Month& operator++();
        Month operator++(int); 
        
       virtual ~Month(); 
    
};

#endif	/* MONTH_H */

