/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve problem 2 from chapter 13
 * Created on November 17, 2015, 9:17 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;
//User Libraries
#include "Employee.h"

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    Employee dude;
    Employee man("Michael", 234567);
    Employee guy("Carlos", "Accounting", "Accountant", 1234567);
    
    //Output information
    cout << setw(20) << left << "Name " << "ID number " << "Department   " << "Position\n";
    cout << setw(20) << left << man.getName() << " " << man.getId() << " " << man.getDepart()
         << " " << man.getPosi() << "\n";
    cout << setw(20) << left << dude.getDepart() << " " << dude.getId() << "   " << dude.getDepart()
         << " " << dude.getPosi() << "\n";
    cout << setw(20) << left << guy.getName() << " " << guy.getId() << "   " << guy.getDepart()
         << "   " << guy.getPosi() << "\n";
    
    
    

    return 0;
}

