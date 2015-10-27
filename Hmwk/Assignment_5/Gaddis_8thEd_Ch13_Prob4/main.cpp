/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose solve the personal information class
 * Created on October 27, 2015, 10:04 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries
#include "Info.h"
//Global constants

//function Prototypes

//execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Info a[3] = {Info("Eduardo Rangel", "274 house ave.", 19, 1233445678),
    Info("Luis", "756 wilmington ca.", 23, 12345678),
    Info("Sir smith", "12345 anywhere st.", 32, 23456778)};
    //print names from persons
    for(int i = 0; i< 3; i++){
        cout << "name: " << a[i].getName() << "\n";
        cout << "address: " << a[i].getAdd() << "\n";
        cout << "age: " << a[i].getAge() << "\n";
        cout << "phone number: " << a[i].getPhne() << "\n";
    }
    
    
    
    

    return 0;
}

