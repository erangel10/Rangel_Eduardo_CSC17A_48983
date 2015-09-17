/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Calculate the average grades and sort grades in ascending order
 * Created on September 17, 2015, 8:36 AM
 */
//System Libraries
#include <iomanip>
#include <iostream>

using namespace std;
//User LIbraries

//Global Constants

//Function Prototypes
void bsort(float *scores, int ttlScor);
float avg(float *scores, int ttlScor);
//Execution begin here
int main(int argc, char** argv) {
    //Declare variables
    float *scores;//dynamical array
    float total=0.0, average;
    int ttlScor;//Holds the number of Total scores
    
    //Prompt user for input
    
    cout<<"Please enter the number of test scores you want to enter"<<endl;
    cin >> ttlScor;
    
    //Dynamical array
    scores = new float[ttlScor];
    //call the average function to calculate the average
    avg(scores, ttlScor);
    cout<<endl;
    //Call the sorting function
    bsort(scores, ttlScor);
    //cout<<"Grades in ascending order are: "<<endl;
    //cout<<endl;
    for(int i = 0; i < ttlScor;i++){
        cout<<"Test Score: "<<(i + 1)<<": "<<scores[i]<<endl;
        cout<<endl;
    }
   
    //close the 'new' statement
    delete [] scores;
    scores = 0;
    //Exit
    return 0;
}


//Calculate average function
float avg(float *scores, int ttlScor){
    //decalre variables
    float average;
    float total;
    //float ttlScor;
    cout << "Enter the test scores below.\n";
    for (int i = 0; i < ttlScor; i++){
        cout << "Test Score " << (i + 1) << ": ";
        cin >> scores[i];
        //Input validation
        while (scores[i] < 0){
            cout<<"Please enter a positive number"<<endl;
            cin>>scores[i];
        }           
    }
    //calculate total of scores
    for (int i = 0;i < ttlScor; i++){
        total += scores[i];
    }
    //calculate average
    average = total / ttlScor;
    //output the results 
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"The total average is: "<<average<<endl;
    return average;
}


//sort the scores in ascending order function
void bsort(float *scores, int ttlScor){
    //declare variables
    bool exchang;
    do{
  exchang = false; // assume no exchanges
  for(int i = 0; i < ttlScor - 1; i++){
   if(scores[i] > scores[i + 1]){
    float temp = scores[i];
    scores[i] = scores[i+1];
    scores[i+1] = temp;
    exchang = true; // after exchange, must look again
   }
  }
 }while(exchang);
     
}