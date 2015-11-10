/* 
 * File:   DayOfYear.h
 * Author: rcc
 *
 * Created on November 5, 2015, 9:56 AM
 */

#ifndef DAYOFYEAR_H
#define	DAYOFYEAR_H
#include <string>

using namespace std;

class DayOfYear
{
    private:
        string month;
        int day;
    
    public:
        DayOfYear(int);
        DayOfYear(string, int);
        void print();
        DayOfYear operator ++();
        DayOfYear operator ++(int);
        DayOfYear operator --();
        DayOfYear operator --(int);
       
//        virtual ~DayOfyear();
};

#endif	/* DAYOFYEAR_H */

