/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve problem 1 number class
 * Created on November 5, 2015, 9:15 AM
 */
//System libraries
#include <iomanip>

using namespace std;
//User libraries
#include "Number.h"
//global constants


//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //constant number to output able to change value
    Number num(203);
    //print the number in letters
    num.print();
    return 0;
}

