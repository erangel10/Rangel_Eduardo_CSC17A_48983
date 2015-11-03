/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose:  
 * Created on November 3, 2015, 10:04 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries
#include "Inventory.h"

//Global constants

//Function Prototypes
void printInfo(Inventory );

//Execution begins here
int main(int argc, char** argv) {
    //Dclare variables
    Inventory thing1;
    int item;
    int units;
    float cost;
    //show default constructor
    cout << "created new object\n\n\n";
    printInfo(thing1);
    //alter members
    cout << "altering members\n\n\n";
    thing1.setCost(2.8);
    thing1.setItem(15862);
    thing1.setQuant(67);
     printInfo(thing1);
     //create with other constructor
     cout << "second constructor requires input\n";
     do{
         cout<< "input item number(must be positive)\n";
         cin >> item;
     }while(item < 1);
      do{
         cout<< "input quantity(must be positive)\n";
         cin >> units;
     }while(units < 1);
      do{
         cout<< "input cost per unit(must be positive)\n";
         cin >> cost;
     }while(cost < 1);
     Inventory thing2(item,units,cost);
     printInfo(thing2);
    return 0;
}    
    

void printInfo(Inventory a){
    cout << "item number " << a.getItem() << "\n";
    cout << "quantity " << a.getQuant() << "\n";
    cout << "cost per unit " << a.getCost() << "\n";
    cout << "total cost " << a.getTotal() << "\n";
    
}
