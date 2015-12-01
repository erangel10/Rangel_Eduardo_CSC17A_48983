#include "Employee.h"
#include <iostream>

Employee::Employee(string nam, string num, string date)
{
   setName(nam);
   setNumber(num);
   setHired(date);
}

void Employee::setName(string n)
{
    name = n;
}

void Employee::setNumber(string n)
{
    number = n;
}

void Employee::setHired(string n)
{
    dateHired = n;
}

void Employee::print()
{
   cout<< "Employee name is: "<<name<<endl;
   cout<<"Employee number is: "<<number<<endl;
   cout<<"Employee hired date is: "<<endl;
}

ProductionWorker::ProductionWorker(string namee, string num, string date, int s, float pay): Employee(namee, num, date)
{
    changeShift(s);
    setPay(pay);
    
}

void ProductionWorker::changeShift(int s)
{
    if (s==1) shift = 1;
    else if (s==2)shift = 2;
    else shift = 1;    
}

void ProductionWorker::setPay(float p)
{
    (p>0) ? hourlyPay = p :hourlyPay = 0;
}

void ProductionWorker::print()
{
   cout<<"The name is: "<<getName()<<endl;
   cout<<"The number is: "<<getNumber()<<endl;
   cout<<"The Employee hire date is: "<<getHired()<<endl;
   cout<<"The work shift is: "<<shift<<endl;
   cout<<"The hourly pay is "<<hourlyPay<<endl;
}








