/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve Problem 4 NumDays Class
 * Created on November 10, 2015, 10:10 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries
#include "NumDays.h"

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    NumDays a(10);
    NumDays b(12);
    NumDays c(24);
    
    //output information
    cout<<"Hours"<<a.getHour()<<"\n";
    cout<<"Day a"<<a.getDay()<<"\n";
    cout<<"Day b"<<b.getDay()<<"\n";
    cout<<"Day c"<<c.getDay()<<"\n";
    
    //increase operators
    c++;
    cout << "day c++ " << c.getDay() << "\n";
    cout << "day a+b " << (a+b).getDay() << "\n";
    
    //Decrease operators
    a--;
    cout << "day a-- " << a.getDay() << "\n";

    return 0;
}

