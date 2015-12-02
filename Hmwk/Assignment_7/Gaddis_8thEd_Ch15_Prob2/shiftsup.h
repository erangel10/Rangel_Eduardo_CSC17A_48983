/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve problem 2
 * Created on November 29, 2015, 8:21 PM
 */

#ifndef SHIFTSUP_H
#define	SHIFTSUP_H

//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//User Libraries
#include "employee.h"

class ShiftSupervisor : public Employee{
    private:
        float anSalry;
        float anBonus;
        
    public:
        ShiftSupervisor() : Employee(){
            anSalry=0.0;
            anBonus=0.0;
        }
        
        ShiftSupervisor(string name, int num, string hire, 
        float annualS, float annualB) : Employee(name, num, hire){
            anSalry=annualS;
            anBonus=annualB;
        }
        
        float getAnnualS()
            {return anSalry;}
        float getAnnualB()
            {return anBonus;}
        
};

#endif	/* SHIFTSUP_H */

