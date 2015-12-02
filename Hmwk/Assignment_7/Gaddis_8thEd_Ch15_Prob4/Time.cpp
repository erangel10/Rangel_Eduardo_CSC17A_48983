
#include "Time.h"

milTime::milTime(int mH, int mS)
{
    milHours = mH;
    milSeconds = mS;
}

void milTime::setTime(int mH, int mS)
{
    milHours = mH;
    milSeconds = mS;
    hour = (milHours / 100);
    min = milHours % 100;
    sec = milSeconds;
    
    
}



