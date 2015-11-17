
#include "Employee.h"


//All employee info to empty
Employee::Employee()
{
    depart = " ";
    name = " ";
    position = " ";
    idNum = 0;
    
}

//Full employment info
Employee::Employee(string namee, string department, string positionn, int id)
{
    name = namee;
    depart = department;
    position = positionn;
    idNum = id;
    
}


Employee::Employee(string namee, int id)
{
    name = namee;
    idNum = id;
    depart = " ";
    position = " ";
}


Employee::~Employee()
{
    
}