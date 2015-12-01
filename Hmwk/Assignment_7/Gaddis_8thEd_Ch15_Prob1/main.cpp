/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Solve problem 1
 * Created on November 25, 2015, 4:31 PM
 */
//system libraries
#include <string>
#include <iostream>

using namespace std;
//user libraries
#include "Employee.h"
//global constants

//function prototypes
void problem1();

//execution begins here
int main(int argc, char** argv) {
    problem1();
   
    return 0;
}

void problem1()
{
    string name, date, num;
    //prompt user for input 
    cout<<"Enter the employee name, number and date"<<endl;
    cin>>name>>num>>date;
    
    int empType;
    cout<<"Is the person a: 1.Employee. 2.Production worker"<<endl;
    cin>>empType;
    if (empType == 2)
    {
        int shift;
        float pay;
        cout<<"Enter the employee shift (1. Day, 2. Night) and the employee hourly pay"<<endl;
        cin>>shift>>pay;
        
        //call the class and give it a name
        Employee *worker;
        new ProductionWorker(name, num, date, shift, pay);
        worker->print();
        
        //delete allocated pointer
        delete worker;
    }else {
      Employee *emp = new Employee(name, num, date);
      emp->print();
      delete emp;
    }
    cout<<endl;
}









