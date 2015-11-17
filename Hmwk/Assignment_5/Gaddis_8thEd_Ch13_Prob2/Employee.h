/* 
 * File:   Employee.h
 * Author: Eduardo Rangel
 * Created on November 17, 2015, 9:18 AM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
    private:
    
        string name;
        int idNum;
        string depart;
        string position;
    
    public:
        
        Employee();
        Employee(string, string, string, int);
        Employee (string, int);
        string getName(){return name;};
        int    getId(){return idNum;};
        string getDepart(){return depart;};
        string getPosi(){return position;};
        virtual ~Employee();
        
};


#endif	/* EMPLOYEE_H */

