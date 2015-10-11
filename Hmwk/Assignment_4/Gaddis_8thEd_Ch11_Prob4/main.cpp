/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Weather statistics
 * Created on October 9, 2015, 7:48 PM
 */
//System libraries
#include <iostream>
#include <string>

using namespace std;
//User libraries

//Global Constants

//declare structures
struct weather
{
    float ttlRain;
    float highest;
    float lowest;
    float avg;
};
//Function Prototypes
void rainInf(weather &);
//float avgRain(weather [], int, &);
//execution begins here
int main(int argc, char** argv) {
    //declare variables
    const int size = 2;
    weather month[size];
    float average = 0;
    float ttlAnul = 0.0;
    
    //ask user to enter data for the 12 months individually
    //total = rainInf(month, size);
    for (int i=1;i<=size;i++)
    {
        cout<<endl;
        cout<<"Month: "<<i<<endl;
        rainInf(month[i]);
        ttlAnul += month[i].ttlRain;
        average = ttlAnul /12;
        //ttlAnul=
    //}
    //calculate average temperature
    cout << "The average rainfall for the year is ";
	month[i].ttlRain / 12;
	cout << average << " inches." << endl;
    }   
        
    return 0;
}
//Ask user for input in this function
void rainInf(weather &data)
{
    //Prompt user for input 
    cout<<"Please enter the total rain for the month"<<endl;
    cin>>data.ttlRain;
    
    cout<<"Please enter the highest temperature for the month"<<endl;
    cin>>data.highest;
    
    cout<<"PLease enter the lowest temperature for the month"<<endl;
    cin>>data.lowest;
    
    cout<<"Please enter the average temperature for the month"<<endl;\
    cin>>data.avg;
    
    
}

