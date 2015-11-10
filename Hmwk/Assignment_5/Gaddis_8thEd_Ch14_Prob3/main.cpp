/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve problem 2 Day of Year
 * Created on November 5, 2015, 9:54 AM
 */
//system libraries
#include <iostream>

using namespace std;
//user libraries
#include "DayOfYear.h"

int main(int argc, char** argv) {
    //i can change the values to get another days 
    DayOfYear a("August",31);
    a.print();
    a++;
    a.print();
    a--;
    a.print();
    
    
    return 0;
}

