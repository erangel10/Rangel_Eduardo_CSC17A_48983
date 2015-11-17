
#include <iostream>
#include "NumDays.h"


NumDays::NumDays(int hours)
{
    this->hours = hours;
    this->day = static_cast<float>(hours)/8;
}

NumDays NumDays::operator +(const NumDays &right)
{
    NumDays temp(hours);
    temp.hours = temp.hours - right.hours;
    temp.day = static_cast<float>(temp.hours)/8;
    
    return temp;
}

NumDays NumDays::operator - (const NumDays &right)
{
    NumDays temp(hours);
    temp.hours = temp.hours - right.hours;
    temp.day = static_cast<float>(temp.hours)/8;
    
    return temp;
}


NumDays NumDays::operator ++()
{
    hours++;
    day = static_cast<float>(hours)/8;
    return *this;
}

NumDays NumDays::operator ++(int)
{
    NumDays temp(hours);
    day = static_cast<float>(hours)/8;
    return temp;
}

NumDays NumDays::operator --()
{
    hours--;
    day = static_cast<float>(hours)/8;
    return *this;
}

NumDays NumDays::operator --(int)
{
    NumDays temp(hours);
    day = static_cast<float>(hours)/8;
    return temp;
}


NumDays::~NumDays()
{
    
}




