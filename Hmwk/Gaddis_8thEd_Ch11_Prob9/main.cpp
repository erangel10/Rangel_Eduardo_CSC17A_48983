/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Make a structure and enter 10 structures for 10 people
 * Created on September 30, 2015, 9:39 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <String>
#include <iomanip>

using namespace std;
//User interface 

//Global constants
struct Bureau
{
    string name;//User name
    string phneNum;//user phone number
    string topic;//Speaking topic
    int feeRqed;//Fee required
};
//Function Prototypes 


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int numspkr = 10;//number of speakers
    int index;//counter in the for loop
    
    
    
    Bureau speaker;
    
    cout<<speaker.name<<endl;

    return 0;
}

