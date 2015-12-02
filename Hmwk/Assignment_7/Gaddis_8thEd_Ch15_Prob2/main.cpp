/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve problem 2
 * Created on November 29, 2015, 8:21 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
#include "employee.h"
#include "productionworker.h"
#include "shiftsup.h"

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Variable Declaration
    
    //Create Employee
    ProductionWorker worker("Victor Medel", 101707, "09/16/13", 2, 21.50);
    
    //Display Employee Information
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Employee Name:         "<<worker.getName()<<endl;
    cout<<"Employee Number:       "<<worker.getNum()<<endl;
    cout<<"Employee's Hire Date:  "<<worker.getHire()<<endl;
    cout<<"Employee's Shift:      "<<worker.getShift()<<endl;
    cout<<"Employee's Pay Rate:   $"<<worker.getPayRate()<<endl;
    cout<<endl<<endl;
    
    //Create Shift Sup
    ShiftSupervisor sup("Mickey Mouse", 12345, "11/18/28", 100000, 2000);
    
    //Display Sup's Information
    cout<<"--->Shift Supervisor<---"<<endl;
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Employee's Name:      "<<sup.getName()<<endl;
    cout<<"Employee's Number:    "<<sup.getNum()<<endl;
    cout<<"Employee's Hire Date: "<<sup.getHire()<<endl;
    cout<<"Annual Salary:        $"<<sup.getAnnualS()<<endl;
    cout<<"Annual Bonus:         $"<<sup.getAnnualB()<<endl;
    
    //Exit Stage Right
    return 0;
}