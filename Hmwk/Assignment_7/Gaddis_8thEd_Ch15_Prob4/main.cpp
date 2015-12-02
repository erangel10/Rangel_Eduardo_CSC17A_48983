/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on December 1, 2015, 9:51 AM
 */
//system libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
//user libraries
#include "Time.h"
//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    int hr, sec;
    
    //do 
    //{
        cout<<endl;
        cout<<"Enter time military format (ex. 1300 for 1:30pm): ";
        cin>>hr;
    //}while(hr>0000 || hr>2400);
    
    sec = 0;
    milTime time(hr, sec);
    time.setTime(hr, sec);
    
    
    //output
    cout<<"You entered the following time: "<<hr<<endl;
    cout<<"Military format: "<<setw(4)<<setfill('0')<<time.getHour()<<" Hundred Hours ";
    
    if (time.getStandHr() == 0)
    {
        cout<<"Standard Format: "<<"12"<<":"<<time.getMin()<<" AM"<<endl;
        
    }else if (time.getHour() < 13)
    {
        cout<<"Standard Format: "<<time.getHour()<<":"<<time.getMin()<<endl;
        if (hr>1159)
        {
            cout<<" PM"<<endl;
            
        }else 
            cout<<" AM"<<endl;
    }else{
        cout<<"Standard Format: "<<time.getStandHr()<<":"<<time.getMin();
        if (hr>1159)
        {
            cout<<" PM";
        }else 
        {
            cout<<" AM";
        }
        cout<<endl;
    }
    
    
    return 0;
}

