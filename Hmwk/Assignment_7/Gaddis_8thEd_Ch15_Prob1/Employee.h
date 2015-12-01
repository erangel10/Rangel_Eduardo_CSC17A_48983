/* 
 * File:   Employee.h
 * Author: admin
 *
 * Created on November 27, 2015, 4:34 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
    private:
        string name;
        string number;
        string dateHired;

    public:
        Employee(string, string, string);
        void setName(string);
        void setNumber(string);
        void setHired(string);
        string getName(){return name;}
        string getNumber(){return name;}
        string getHired(){return dateHired;}
        virtual void print();
};


class ProductionWorker : public Employee
{
    private:
        int shift;
        float hourlyPay;
    
    public:
      ProductionWorker(string, string, string, int, float);
      void changeShift(int);
      void setShift();
      void setPay(float);
      int getShift(int){return shift;}
      float getPay(float){return hourlyPay;}
       void print(); 
        
        
};


#endif	/* EMPLOYEE_H */

