/* 
 * File:   Info.h
 * Author: Eduardo Rangel
 * Purpose: solve the class Problem
 * Created on October 27, 2015, 10:07 AM
 */
#ifndef INFO_H
#define	INFO_H
#include <string>

using namespace std;

class Info
{
    //declare the private data
private:
  string name;  
  string addres;
  int age;
  int phoneNu;//phone number
  
  
  //declare the public data  
public:
    Info(string, string, int, int);
    Info(const Info& orig);
    string getName(){return name;}
    string getAdd(){return addres;}
    int getAge(){return age;}
    int getPhne(){return phoneNu;}
    virtual ~Info();
};

#endif	/* INFO_H */

