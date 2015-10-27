/* 
 * File:   Info.cpp
 * Author: rcc
 *
 * Created on October 27, 2015, 10:17 AM
 */

#include <string>
//user Libraries
#include "Info.h"

Info::Info(string name, string addres, int age, int phoneNu)
{
    this->name = name;
    this->addres = addres;
    this->age = age;
    this->phoneNu = phoneNu;
}

Info::Info(const Info& orig)
{
    
}

Info::~Info() {
}

