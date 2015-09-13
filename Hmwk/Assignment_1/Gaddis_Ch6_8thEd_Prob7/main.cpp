/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Convert the temperature from farenheit to celsius
 * Created on September 8, 2015, 7:03 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants
float celsius(int fTemp);
//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float temp;
    //Use the for loop to output the table of temperatures from 0 to 20
    for (int i=0;i <=20;i++){
        
        cout << i << "\t" << celsius(i) << endl;
    }

    return 0;
}

float celsius(int fTemp){
    
    return (5.0/9.0)*((float)fTemp - 32.0);
    
}