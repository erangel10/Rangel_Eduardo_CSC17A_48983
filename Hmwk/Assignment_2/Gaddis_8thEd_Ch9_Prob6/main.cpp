/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Modify program 9-19
 * Created on September 24, 2015, 8:43 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants 

//Function Prototypes 
void arrSort(int *[], int);
void showAry(const int [], int);
void showPtr(int *[], int);
//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    const int numDntn = 15;//number of donations 
    
    //donations array
    int dontns [numDntn] = {5, 100, 5, 25, 10,
                            5, 25,  5,  5, 100,
                            10, 15, 10, 5, 10 };
    
    //an array of pointers to int. 
    int *arrPtr[numDntn] = {nullptr, nullptr, nullptr, nullptr, nullptr,
                            nullptr, nullptr, nullptr, nullptr, nullptr,
                            nullptr, nullptr, nullptr, nullptr, nullptr };
    
    //each element of arrPtr is a pointer to int . make each 
    //element point to an element in the donations array. 
    for (int count=0;count < numDntn;count++){
        arrPtr[count] = &dontns[count];
        
    }
    //
    arrSort(arrPtr, numDntn);
    
    //
    cout<<"The donations sorted in ascending order are: \n";
    showAry(arrPtr, numDntn);
    
    //
    cout<<"The donations, in their original order are: \n";
    showAry(dontns, numDntn);
    
    return 0;
}

void arrSort(int *arr[], int SIZE){
   //decalare variables 
    int scan, minIndx;
    int *minElem;
    
    for (scan = 0; scan < (SIZE - 1); scan++){
        
        minIndx = scan;
        minElem = arr[scan];
        for(int index = scan + 1; index < SIZE; index++){
            if (*arr([index]) < *minElem){
                minElem = arr[index];
                minIndx = index;
                
            }
        }
        arr[minIndx] = arr[scan];
        arr[scan] = minElem;
        
    }
       
}



void showAry(const int arr[], int SIZE){
 
    for (int count = 0; count < SIZE; count++){
        cout<<arr[count]<<" ";
        cout<<endl;
    }
  
}


//Show array pointer
void showPtr(int *arr[], int SIZE){
    for (int count = 0; count < SIZE; count++){
        cout<<*(arr[count])<<" ";
        cout<<endl;
    }
   
}