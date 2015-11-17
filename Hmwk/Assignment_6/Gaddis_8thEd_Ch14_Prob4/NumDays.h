/* 
 * File:   NumDays.h
 * Author: Eduardo Rangel
 * Purpose: Solve problem 4 NumDays class
 * Created on November 10, 2015, 10:10 AM
 */

#ifndef NUMDAYS_H
#define	NUMDAYS_H

class NumDays
{
    private:
      int hours;
      float day;
        
    
    public:
      NumDays(int);
      int getHour(){return hours;};
      float getDay(){return day;};
      NumDays operator +(const NumDays &);
      NumDays operator -(const NumDays &);
      NumDays operator ++();
      NumDays operator ++(int);
      NumDays operator --();
      NumDays operator --(int);
      virtual ~NumDays();
};


#endif	/* NUMDAYS_H */

