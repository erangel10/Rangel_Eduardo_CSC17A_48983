/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: find the mode, mean, and medium
 * Created on October 2, 2015, 1:42 PM
 */
//System prototype
#include <cstdlib>
#include <iostream>

using namespace std;
//user interface

//Global constants 

//Function Prototypes
float median(float [], int);
float mode(float [], int);
float mean(float [], int);

//execution begins here
int main(int argc, char** argv) {
    //declare array
    float dValues[] = {6.4, 9.8, 3.4, 7.9, 2.3, 8.6, 7.9, 8.8, 4.7, 1.2};
    int SIZE = 10;
       
    //output the results
    cout << "Median = " << median(dValues, SIZE) << endl;
    cout << "Mode = " << mode(dValues, SIZE) << endl;
    cout << "Mean = " << mean(dValues, SIZE) << endl;
    
    
    return 0;
    //exit stage
}

//function to calculate the median
float median(float daArray[], int iSize) {
    // Allocate an array of the same size and sort it.
    float *dpSort = new float[iSize];
    for (int i = 0; i < iSize; ++i) {
        dpSort[i] = daArray[i];
    }
    //loop it and allocate it
    for (int i = iSize - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (dpSort[j] > dpSort[j+1]) {
                float dTemp = dpSort[j];
                dpSort[j] = dpSort[j+1];
                dpSort[j+1] = dTemp;
            }
        }
    }

    // Middle or average of middle values in the sorted array.
    float dMedian = 0.0;
    if ((iSize % 2) == 0) {
        dMedian = (dpSort[iSize/2] + dpSort[(iSize/2) - 1])/2.0;
    } else {
        //sort and then find the median
        dMedian = dpSort[iSize/2];
    }
    delete [] dpSort;
    return dMedian;
}

//function to calculate the mode
float mode(float daArray[], int iSize) {
    // Allocate an int array of the same size to hold the repetition count
    
    int *ipRepet = new int[iSize];
    for (int i = 0; i < iSize; ++i) {
        ipRepet[i] = 0;
        int j = 0;
        bool bFound = false;//use boolena to tell if is the same or not
        while ((j < i) && (daArray[i] != daArray[j])) {
            if (daArray[i] != daArray[j]) {
                ++j;
            }
        }
        ++(ipRepet[j]);//increment
    }
    //number of repetitions
    int maxRept = 0;
    for (int i = 1; i < iSize; ++i) {
        if (ipRepet[i] > ipRepet[maxRept]) {
            maxRept = i;
        }
    }
    delete [] ipRepet;
    return daArray[maxRept];
}


//function to calculate the mean
float mean(float daArray[], int iSize) {
    //declare the array 
    float dSum = daArray[0];
    for (int i = 1; i < iSize; ++i) {
        dSum += daArray[i];
    }
    //divide the sum by the size
    return dSum/iSize;
}