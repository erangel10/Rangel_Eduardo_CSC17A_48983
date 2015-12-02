/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * purpose: Solve problem 5
 * Created on December 1, 2015, 8:33 PM
 */

#include "miltime.h"

void MilTime::setTime(int mH, int mS){
    
    milHour=mH;
    milSeconds=mS;
    hour=(milHour/100);
    min=milHour%100;
    sec=milSeconds;
    
    
}

