/* 
 * File:   main.cpp
 * Author: admin
 *Purpose: Convert dollars into Japanese Yen and Euros
 * Created on September 10, 2015, 6:36 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const float YEN = 120.70;
    const float EURO =0.89;
    float dollar;
    //Promp user for input
    cout<<"How many dollars do you want to convert to Japanese Yens and Euros?"<<endl;
    cin>>dollar;
    //Calculate the conversion
    cout<<dollar<<" converted into Japanese Yens and Euros are/is "<<dollar * YEN<<" YENS "<< "and "<<dollar * EURO<<" Euros"<<endl;
    
    //Exit
    return 0;
    
}

