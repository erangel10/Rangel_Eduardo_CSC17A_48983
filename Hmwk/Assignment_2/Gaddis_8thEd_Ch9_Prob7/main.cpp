/* 
 * File:   main.cpp
 * Author: EDUARDO
 * purpose Reverse the sroting by decreasing order
 * Created on October 2, 2015, 5:20 PM
 */
//system libararies
#include <iostream>


using namespace std;
//user libraries

//global constants

// Function prototypes
 void arySort(int *[], int);
 void showAry(const int [], int);
 void arayPtr(int *[], int);
//execution begins here
 int main(int argc, char** argv)
 {
     //declare array
     const int donatn = 15; // Number of donations

     // An array containing the donation amounts.
     int donatns[donatn] = { 5, 100, 5, 25, 10,
                             5, 25, 5, 5, 100,
                             10, 15, 10, 5, 10 };

     // An array of pointers to int.
       int *arrPtr[donatn];                             

     // Each element of arrPtr is a pointer to int. Make each
     // element point to an element in the donations array.
     for (int count = 0; count < donatn; count++)
     arrPtr[count] = &donatns[count];

     // Sort the elements of the array of pointers.
     arySort(arrPtr, donatn);

     // Display the donations using the array of pointers. This
     // will display them in sorted order.
     cout << "The donations, sorted in descending order are: \n";
     arayPtr(arrPtr, donatn);

     // Display the donations in their original order.
     cout << "The donations, in their original order are: \n";
     showAry(donatns, donatn);
     
     
     
     return 0;
 }
 
 
 void arySort(int *arr[], int size)
 {
     int scan, minIndx;
     int *minElem;

     for (scan = 0; scan < (size - 1); scan++)
     {
     minIndx = scan;
     minElem = arr[scan];
     for(int index = scan + 1; index < size; index++)
     {
     if (*(arr[index]) > *minElem)
     {
     minElem = arr[index];
     minIndx = index;
     }
     }
     arr[minIndx] = arr[scan];
     arr[scan] = minElem;
 }
}

 void showAry(const int arr[], int size)
 {
     for (int count = 0; count < size; count++)
     cout << arr[count] << " ";
     cout << endl;
     }

     void arayPtr(int *arr[], int size)
     {
     for (int count = 0; count < size; count++)
     cout << *(arr[count]) << " ";
     cout << endl;
 }