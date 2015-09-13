/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Convert Celcius temperature to farenheit
 * Created on September 9, 2015, 6:22 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    float celcius;
    //Prompt user for input
    cout<<"Please enter the temperature in celcius"<<endl;
    cin>>celcius;
    //output the result                                   //formula for the conversion from celcius to farenheit
    cout<<"The temperature from celcius to farenheit is: "<<celcius * 9/5 + 32<<"f"<<endl;    
    return 0;
}

