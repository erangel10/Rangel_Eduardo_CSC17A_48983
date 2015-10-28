/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Created on October 27, 2014, 2:14 PM
 * Purpose: Midterm test
 */
//System Libraries
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;
//User defined Libraries
#include "Midterm.h"

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
statsResult *avgMedMode(int *,int);
void Sort(int *,int);
void minPos(int *,int,int);
void printStat(statsResult,statsResult *,int);
void problem4();
void check(int &,int []);
void display(int []);
void problem5();
void problem6();

//Begin Execution Here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Declare variables
    int num;
    int checks;
    int check;
    int dnum;
    int deposit;
    cout<<"How many customers are there? ";
    cin>>num;
    //Allocate memory for structure
    Custom *array=new Custom;
    //Declare size of array structure
    array->size=num;;
    //Allocate memory
    array->person=new int [array->size];
    //Input Information
    for(int i=0;i<array->size;i++)
    {
        //Account Number
        cout<<"Enter Account Number: ";
        cin>>array[i].account;
        //Limit Account # to be 5 digits
        if(array[i].account>99999||array[i].account<10000){
            do{
                cout<<"Enter Account Number you are only allowed to use 5 digits"<<endl;
                cin>>array[i].account;
            }while(array[i].account>99999||array[i].account<10000);
        }
        
        //Balance
        cout<<"Enter the balance at the beginning of the month: ";
        cin>>array[i].balance;
        //Checks
        cout<<"How many checks did this person write? ";
        cin>>checks;
        //calculate checks
        array[i].checks=0;
        for(int j=0;j<checks;j++)
        {
            cout<<"Enter the check amount ";
            cin>>check;
            array[i].checks=array[i].checks+check;
        }
        
        //Deposit
        cout<<"How many deposits did this person make? ";
        cin>>dnum;
        array[i].deposits=0;
        for(int k=0;k<dnum;k++)
        {
            cout<<"Enter the deposit amount ";
            cin>>deposit;
            array[i].deposits=array[i].deposits+deposit;
        }
        //Balance
        array[i].totbal1=(array[i].balance+array[i].deposits)-array[i].checks;
        cout<<endl;
    }
    
    //Display Result if fee is exceeded
    for(int i=0;i<num;i++){
        if(array[i].totbal1<0){
            array[i].totbal2=array[i].totbal1-15;//-12
            
            //output the results
            cout<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Person #"<<i+1<<endl;
            cout<<"Account Number: "<<array[i].account<<endl;
            cout<<"Balance: $"<<array[i].balance<<endl;
            cout<<"Checks Total: $"<<array[i].checks<<endl;
            cout<<"Deposits Total: $"<<array[i].deposits<<endl;
            cout<<"You have overdrawn, additional $15 dollars fee is required"<<endl;
            cout<<"New Balance without fee: $"<<array[i].totbal1<<endl;
            cout<<"New Balance with fee: $"<<array[i].totbal2<<endl;
        }
        else{
            //Display Result when not Overdrawn
            cout<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Person #"<<i+1<<endl;
            cout<<"Account Number: "<<array[i].account<<endl;
            cout<<"Balance: $"<<array[i].balance<<endl;
            cout<<"Checks Total: $"<<array[i].checks<<endl;
            cout<<"Deposits Total: $"<<array[i].deposits<<endl;
            cout<<"New Balance: $"<<array[i].totbal1<<endl;
        }
    }
    cout<<endl;
    //Un-Allocate
    delete []array;
}

void problem2(){
    //Declare Variables
    int num;
    cout<<"How many employees are recorded? ";
    cin>>num;
    //Allocate memory for structure
    Employ *b=new Employ;
    //Declare size of array structure
    b->size=num;;
    //Allocate memory
    b->worker=new int [b->size];
    //Names Requirement
    string names[num];
    for(int i=0;i<b->size;i++){
        //Name
        cout<<"What is the employee's name? ";
        cin>>names[i];
        //Hour
        cout<<"How many hours worked? ";
        cin>>b[i].hours;
        //Don't take Negative
        if(b[i].hours<0){
            do{
                cout<<"How many hours worked? (Positive Number) ";
                cin>>b[i].hours;
            }while(b[i].hours<0);
        }
        //Rate of Pay
        cout<<"Rate of pay? ($/Hour) ";
        cin>>b[i].rate;
        //Don't take Negative
        if(b[i].rate<0){
            do{
                cout<<"Rate of pay? ($/Hour, and Positive Number) ";
                cin>>b[i].rate;
            }while(b[i].rate<0);
        }
        //First 20 Hours
        if(b[i].hours<=20){
            b[i].gross=b[i].hours*b[i].rate;
        }
        //20~40 (20+),(-40)
        if(b[i].hours>20&&b[i].hours<40){
            b[i].gross=2*(b[i].hours*b[i].rate);
        }
        //40+
        if(b[i].hours>=40){
            b[i].gross=3*(b[i].hours*b[i].rate);
        }
        cout<<endl;
    }
    cout<<"Worked thru Loop"<<endl;
    //Display Results
    for(int j=0;j<b->size;j++){
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Employee "<<j+1<<endl;;
        cout<<"Name: "<<names[j]<<endl;
        cout<<"Hours worked: "<<b[j].hours<<endl;
        cout<<"Rate of Pay: "<<b[j].rate<<endl;
        cout<<"Gross Pay: "<<b[j].gross<<endl;
    }
    cout<<endl;
    //Un-Allocate
    delete []b;
    
}

void problem3(){
    //Declare Variables
    int size;
    cout<<"What is the size of the array? ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the value for the array ";
        cin>>array[i];
    }
    avgMedMode(array,size);
    cout<<endl;
}

statsResult *avgMedMode(int *a,int n){
    //Declare variables
    float tot=0;
    int fmedian1,fmedian2,fmedian,mid;
    //Average
    statsResult result;
    for(int i=0;i<n;i++){
        tot=tot+a[i];
    }
    cout<<setprecision(2)<<fixed;
    result.avg=tot/n;
    //Sort
    Sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //Median
    //Even
    if(n%2==0){
        fmedian1=(n/2)-1;
        fmedian2=n/2;
        mid=(a[fmedian1]+a[fmedian2])/2;
        result.median=mid;
    }
    //Odd
    else{
        fmedian=n/2;
        result.median=a[fmedian];
    }
    //Max Frequency
    result.nModes=1;
    int max=1;
    //Loop and compare
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            result.nModes++;
            if(result.nModes>max)max=result.nModes;
        }else{
            result.nModes=1;
        }
    }
    result.maxFreq=max;
    result.nModes=0;
    //Mode
    statsResult *c=new statsResult;
    c->modes=new int [n];
    int temp=a[1];
    for(int i=0;i<n-1;i++){
        if(a[i]==temp){
            result.nModes++;
            if(result.nModes==result.maxFreq){
                //cout<<a[i]<<" ";
                c->modes[i]=a[i];
                result.nModes=0;
                temp=a[i+1];
            }
        }
        if(a[i]==!temp){
            result.nModes=0;
            temp=a[i+1];
        }
    }
    printStat(result,c,n);
    cout<<endl;
    //Un-allocate memory
    delete []c->modes;
    delete []c;
}

void Sort(int *a,int n){
    for(int i=0;i<n-1;i++){
        minPos(a,n,i);
    }
}

void minPos(int *a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(*(a+pos)>*(a+i))swap(*(a+pos),*(a+i));
    }
}

void printStat(statsResult r,statsResult *c,int n){
    cout<<endl;
    cout<<"Display Results"<<endl;
    cout<<"Average: "<<r.avg<<endl;
    cout<<"Median: "<<r.median<<endl;
    cout<<"Max Frequency "<<r.maxFreq<<endl;
    cout<<"Modes: ";
    for(int i=0;i<n;i++){
        cout<<c->modes[i]<<" ";
    }
}

void problem4(){
    //Declare variables
    int start=0;
    const int SIZE=4;
    int input,data,temp;
    int array[SIZE];
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Encrypt"<<endl;
        cout<<"2. Decrypt"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Type in the number related to your choice from the menu above."<<endl;
        cin>>input;
        if(input==1){
            cout<<"Enter 4 digit integer between 0~7"<<endl;
            cin>>data;
            check(data,array);
            //Each digit +3 % 8
            array[0]=(array[0]+3)%8;
            array[1]=(array[1]+3)%8;
            array[2]=(array[2]+3)%8;
            array[3]=(array[3]+3)%8;
            //Swap First 2
            temp=array[0];
            array[0]=array[1];
            array[1]=temp;
            //Swap Last 2
            temp=array[2];
            array[2]=array[3];
            array[3]=temp;
            //Display After
            cout<<"Encrpyted 4 Digit Integer"<<endl;
            display(array);
        }
        if(input==2){
            cout<<"Enter 4 digit integer to decrypt"<<endl;
            cin>>data;
            for(int i=3;i>=0;i--){
                array[i]=data%10;
                data/=10;
            }
            //Swap
            temp=array[0];
            array[0]=array[1];
            array[1]=temp;
            temp=array[2];
            array[2]=array[3];
            array[3]=temp;
            //
            bool a1=1,a2=1,a3=1,a4=1;
            if(array[0]-3<0&&a1==1){
                array[0]=array[0]+5;
                a1=0;
            }
            if(array[1]-3<0&&a2==1){
                array[1]=array[1]+5;
                a2=0;
            }
            if(array[2]-3<0&&a3==1){
                array[2]=array[2]+5;
                a3=0;
            }
            if(array[3]-3<0&&a4==1){
                array[3]=array[3]+5;
                a4=0;
            }
            
            if(array[0]-3<5&&a1==1){
                array[0]=array[0]-3;
                a1=0;
            }
            if(array[1]-3<5&&a2==1){
                array[1]=array[1]-3;
                a2=0;
            }
            if(array[2]-3<5&&a3==1){
                array[2]=array[2]-3;
                a3=0;
            }
            if(array[3]-3<5&&a4==1){
                array[3]=array[3]-3;
                a4=0;
            }
            cout<<"Decrypted 4 Digit Integer"<<endl;
            display(array);
        }
        if(input==3)start=1;
        cout<<endl;
    }while(start==0);
}

//validate user input
void check(int &data, int a[])
{
    a[0]=data/1000;
    //If first digit isn't 0
    if(a[0]==!0){
        while(data>9999||data<1000)
        {
            cout<<"Enter 4 digit integer between 0~7"<<endl;
            cin>>data;
        }
    }
    for(int i=3;i>=0;i--)
    {
        a[i]=data%10;
        data/=10;
    }
    //Check 0~7
    for(int i=0;i<4;i++)
    {
        if(a[i]<0||a[i]>7)
        {
            while(a[i]<0||a[i]>7)
            {
                cout<<"Enter 4 digit integer between 0~7"<<endl;
                cin>>data;
                for(int i=3;i>=0;i--)
                {
                    a[i]=data%10;
                    data/=10;
                }
            }
        }
    }
}

void display(int a[])
{
    for(int i=0;i<4;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}

void problem5()
{
    double a=1;//Change datatype
    int num=170;
    for(int i=1;i<=num;i++)
    {
        a=a*i;
    }
    //Result~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    cout<<"Short data type: "<<7<<endl;
    cout<<"Int data type: "<<16<<endl;
    cout<<"Long data type: "<<19<<endl;
    cout<<"Float data type: "<<34<<endl;
    cout<<"Double data type: "<<170<<endl;
    cout<<endl;
}

void problem6()
{
    cout<<"PART 1"<<endl;
    cout<<"Convert the following 2 numbers to binary, octal, and hex."<<endl;
    cout<<"2.125, 0.06640625"<<endl;
    cout<<"--------------"<<endl;
    cout<<"2.125  base 10"<<endl;
    cout<<"10.001 base 2"<<endl;
    cout<<"2.1    base 8"<<endl;
    cout<<"2.2    base 16"<<endl;
    cout<<"--------------"<<endl;
    cout<<"0.06640625 base 10"<<endl;
    cout<<"0.00010001 base 2"<<endl;
    cout<<"0.0101     base 8"<<endl;
    cout<<"0.11       base 16"<<endl;
    cout<<"Convert 2.125, 0.06640625 to float representation"<<endl;
    cout<<"--------------"<<endl;
    cout<<"-2.125"<<endl;
    cout<<"C0000002"<<endl;
    cout<<"--------------"<<endl;
    cout<<"0.06640625"<<endl;
    cout<<"08800000"<<endl;
    
    cout<<"PART 2"<<endl;
    cout<<"Convert the float representation of the following into the decimal number."<<endl;
    cout<<"46666601, 46666602, B9999AFE"<<endl;
    cout<<endl;
}

void def(int inN)
{
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
