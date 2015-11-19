
#include "Month.h"



Month::Month(string name2)
{
    name = name2;
    monthNum = 1;
}

Month::Month(int monthN) 
{
    monthNum = monthN;//MONTH NUMBER
    name = "January";
}

Month& Month::operator++()
{
    monthNum++;
}

Month Month::operator ++(int)
{
    
}


Month::~Month()
{
    
}







