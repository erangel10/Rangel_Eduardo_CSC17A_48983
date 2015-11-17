/* 
 * File:   DayOfYear.cpp
 * Author: rcc
 *
 * Created on November 5, 2015, 9:56 AM
 */

#include <iostream>
#include "DayOfYear.h"

using namespace std;

DayOfYear::DayOfYear(int day)
{
    this->day = day;
    
}

DayOfYear::DayOfYear(string month, int day)
{
    this -> month=month;
    this->day=day;   
}

void DayOfYear::print()
{
    if (month == "January")
    {
        if (day < 1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else
            cout<<month<<" "<<day<<"\n\n";   
    }
    
    else if (month == "February")
    {
        if (day <1 || day > 28)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "March")
    {
        if (day <1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "April")
    {
        if (day <1 || day > 30)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "May")
    {
        if (day <1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "June")
    {
        if (day <1 || day > 30)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "July")
    {
        if (day <1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "August")
    {
        if (day <1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "September")
    {
        if (day <1 || day > 30)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "October")
    {
        if (day <1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "November")
    {
        if (day <1 || day > 30)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
    else if (month == "December")
    {
        if (day <1 || day > 31)
            cout<<"That day is not in the month"<<endl;
        else 
            cout<<month<<" "<<day<<"\n\n";
    }
    
}

//next day operators
DayOfYear DayOfYear::operator ++()
{
    day++;
    if (month == "January")
    {
        if(day <1 || day>31)
        {
            month = "February";
                    day = 1;
        }
    }
    
    else if (month == "February")
    {
        if (day < 1 || day > 28)
        {
            month = "March";
            day = 1;
        }
    }
    
    
    else if (month == "March")
    {
        if (day < 1 || day > 31)
        {
            month = "April";
            day = 1;
        }
    }
    
    else if (month == "April")
    {
        if (day < 1 || day > 30)
        {
            month = "May";
            day = 1;
        }
    }
   
    else if (month == "May")
    {
        if (day < 1 || day > 31)
        {
            month = "June";
            day = 1;
        }
    }
    
    else if (month == "June")
    {
        if (day < 1 || day > 30)
        {
            month = "July";
            day = 1;
        }
    }
    
    else if (month == "July")
    {
        if (day < 1 || day > 31)
        {
            month = "August";
            day = 1;
        }
    }
    
    else if (month == "August")
    {
        if (day < 1 || day > 31)
        {
            month = "September";
            day = 1;
        }
    }
    
    else if (month == "September")
    {
        if (day < 1 || day > 30)
        {
            month = "October";
            day = 1;
        }
    }
    
    else if (month == "October")
    {
        if (day < 1 || day > 31)
        {
            month = "November";
            day = 1;
        }
    }
    
    else if (month == "November")
    {
        if (day < 1 || day > 30)
        {
            month = "December";
            day = 1;
        }
    }
    
    else if (month == "December")
    {
        if (day < 1 || day > 30)
        {
            month = "January";
            day = 1;
        }
    }
    
    return *this;
}


DayOfYear DayOfYear::operator ++(int)
{
    DayOfYear temp(month, day);
    day++;
    
    if (month == "January")
    {
        if(day <1 || day>31)
        {
            month = "February";
                    day = 1;
        }
    }
    
    else if (month == "February")
    {
        if (day < 1 || day > 28)
        {
            month = "March";
            day = 1;
        }
    }
    
    
    else if (month == "March")
    {
        if (day < 1 || day > 31)
        {
            month = "April";
            day = 1;
        }
    }
    
    else if (month == "April")
    {
        if (day < 1 || day > 30)
        {
            month = "May";
            day = 1;
        }
    }
   
    else if (month == "May")
    {
        if (day < 1 || day > 31)
        {
            month = "June";
            day = 1;
        }
    }
    
    else if (month == "June")
    {
        if (day < 1 || day > 30)
        {
            month = "July";
            day = 1;
        }
    }
    
    else if (month == "July")
    {
        if (day < 1 || day > 31)
        {
            month = "August";
            day = 1;
        }
    }
    
    else if (month == "August")
    {
        if (day < 1 || day > 31)
        {
            month = "September";
            day = 1;
        }
    }
    
    else if (month == "September")
    {
        if (day < 1 || day > 30)
        {
            month = "October";
            day = 1;
        }
    }
    
    else if (month == "October")
    {
        if (day < 1 || day > 31)
        {
            month = "November";
            day = 1;
        }
    }
    
    else if (month == "November")
    {
        if (day < 1 || day > 30)
        {
            month = "December";
            day = 1;
        }
    }
    
    else if (month == "December")
    {
        if (day < 1 || day > 30)
        {
            month = "January";
            day = 1;
        }
    }
    return temp;
}


DayOfYear DayOfYear::operator --()
{
    day--;
    
    if (month == "January")
    {
        if(day <1 || day>31)
        {
            month = "December";
                    day = 31;
        }
    }
    
    else if (month == "February")
    {
        if (day < 1 || day > 28)
        {
            month = "January";
            day = 31;
        }
    }
    
    
    else if (month == "March")
    {
        if (day < 1 || day > 31)
        {
            month = "February";
            day = 28;
        }
    }
    
    else if (month == "April")
    {
        if (day < 1 || day > 30)
        {
            month = "March";
            day = 31;
        }
    }
   
    else if (month == "May")
    {
        if (day < 1 || day > 31)
        {
            month = "April";
            day = 30;
        }
    }
    
    else if (month == "June")
    {
        if (day < 1 || day > 30)
        {
            month = "May";
            day = 31;
        }
    }
    
    else if (month == "July")
    {
        if (day < 1 || day > 31)
        {
            month = "June";
            day = 30;
        }
    }
    
    else if (month == "August")
    {
        if (day < 1 || day > 31)
        {
            month = "July";
            day = 31;
        }
    }
    
    else if (month == "September")
    {
        if (day < 1 || day > 30)
        {
            month = "August";
            day = 31;
        }
    }
    
    else if (month == "October")
    {
        if (day < 1 || day > 31)
        {
            month = "September";
            day = 30;
        }
    }
    
    else if (month == "November")
    {
        if (day < 1 || day > 30)
        {
            month = "October";
            day = 31;
        }
    }
    
    else if (month == "December")
    {
        if (day < 1 || day > 30)
        {
            month = "November";
            day = 30;
        }
    }
    return *this;
}

DayOfYear DayOfYear::operator --(int)
{
    DayOfYear temp(month, day);
    day--;
    
    if (month == "January")
    {
        if(day <1 || day>31)
        {
            month = "December";
                    day = 31;
        }
    }
    
    else if (month == "February")
    {
        if (day < 1 || day > 28)
        {
            month = "January";
            day = 31;
        }
    }
    
    
    else if (month == "March")
    {
        if (day < 1 || day > 31)
        {
            month = "February";
            day = 28;
        }
    }
    
    else if (month == "April")
    {
        if (day < 1 || day > 30)
        {
            month = "March";
            day = 31;
        }
    }
   
    else if (month == "May")
    {
        if (day < 1 || day > 31)
        {
            month = "April";
            day = 30;
        }
    }
    
    else if (month == "June")
    {
        if (day < 1 || day > 30)
        {
            month = "May";
            day = 31;
        }
    }
    
    else if (month == "July")
    {
        if (day < 1 || day > 31)
        {
            month = "June";
            day = 30;
        }
    }
    
    else if (month == "August")
    {
        if (day < 1 || day > 31)
        {
            month = "July";
            day = 31;
        }
    }
    
    else if (month == "September")
    {
        if (day < 1 || day > 30)
        {
            month = "August";
            day = 31;
        }
    }
    
    else if (month == "October")
    {
        if (day < 1 || day > 31)
        {
            month = "September";
            day = 30;
        }
    }
    
    else if (month == "November")
    {
        if (day < 1 || day > 30)
        {
            month = "October";
            day = 31;
        }
    }
    
    else if (month == "December")
    {
        if (day < 1 || day > 30)
        {
            month = "November";
            day = 30;
        }
    }
    return temp;
}

//DayOfYear::~DayOfyear()
//{
    
//}