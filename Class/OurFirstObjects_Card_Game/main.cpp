/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: creation of first object oriented 
 * Created on October 15, 2015, 11:21 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//user libraries

//global constants

//function prototypes
char suit(char);
char numVal(char);

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    //char aSuit[4]={'S', 'H', 'C', 'D'};
    char numVal;
    //loop on all potential 52 cards 
    cout<<"1st Technique"<<endl;
    for (int i=1;i<=52;i++)
    {
       
      numVal =(i-1)%13 + 1;
      if (numVal > 10)numVal =10;
      cout<<"card number = "<<i<<" suit = "<<suit(i)<<endl;    
      cout<<"Numerical value = "<<static_cast<int>(numVal(i))<<endl;
      
    }
  
    return 0;
}
char numVal(char n)
{
    if (n<1||n>52) return 0;
    //return aSuit[(n-1)/13];
    char numVal =(n-1)%13 + 1;
    if (numVal > 10)numVal =10;
    return numVal;
}

char suit(char n)
{
    //declare suit array
    char aSuit[4]={'S', 'H', 'C', 'D'};
    if (n<1||n>52) return 'X';
    return aSuit[(n-1)/13];
    
    
    
    
}