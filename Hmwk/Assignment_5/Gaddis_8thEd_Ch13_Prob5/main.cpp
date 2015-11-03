/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Solve the RetailItem class problem
 * Created on November 3, 2015, 9:15 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries
#include "RetailItem.h"

//Global constants 


//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    //use array to hold the items and prices
    RetailItem a[] = {RetailItem("shirt",12,59.95),RetailItem("jeans",40,34.95),RetailItem("shoes",20,24.95)};
    
    //format and print all Items elements out
    cout << setw(20) << "Description\t" << "Units on Hand\t" << "Price\n\n";
    for(int i = 0;i < 3; i++){
        cout << "Item #" << i+1 << "\t" <<a[i].getDesc() <<"\t\t" 
                << a[i].getUnit() << "\t\t" << a[i].getPrice() << "\n\n";
    }

    
    
    //Exit stage right
    
    return 0;
}

