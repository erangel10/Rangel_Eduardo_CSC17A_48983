/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Calculate the future number of organisms
 * Created on September 10, 2015, 7:36 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //declare variables
    int orgnism, days, poplatn, total = 0, pop;
    float average;
    //Prompt user for input
    cout <<"Enter the starting number of organisms"<<endl;
    cin>>orgnism;
    //Input validation
    while (orgnism < 2){
        cout<<"Please enter a number greater than or equal to 2 "<<endl;
        cin>>orgnism;
    }
    
    cout<<"Enter the average number population increase (as a %)"<<endl;
    cin>>poplatn;
    //calculate the average
    average = (poplatn/100);
    //Input validation
    while (poplatn < 0){
        cout<<"Please enter a positive number "<<endl;
        cin>>poplatn;
    }
    
    cout<<"Enter the number of days they will multiply"<<endl;
    cin>>days;
    //input validation
    while (days < 1){
        cout<<"Please enter a number greater than 1"<<endl;
        cin>>days;
    }
   
    for (int i=1;i <= days;i++){
        pop += orgnism * (1 + (poplatn / 100));
        
        cout<<"Day: "<<i<<"          "<<"Organisms: "<<pop<<endl;
    }
    
   
    
    return 0;
}

