/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: show utility of a structure referneced to a databsesort
 * Created on October 6, 2015, 11:18 AM
 * HMRK: convert structure to . operation and array to pointer notation
 */
//System libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//User libraries
#include <IndexedColumn.h>

//Global Constants

//function Prototypes
IndxCol *fill(int);
void prntStr(IndxCol *, int);
void prntAry(int *,int, int);
void mrkSort(IndxCol *);
//execution begins here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int n=100, col=10;
    
    IndxCol *str=fill(n);
    cout<<"The original index array"<<endl;
    prntAry(str-> array, str->size,col);
    prntAry(str->indx, str->size,col);
    prntStr(str, col);
    //sort data
    mrkSort(str);
    
    return 0;
}

void mrkSort(IndxCol *a)
{
    for (int pos=0;pos<(*a).size;pos++)
    {
        for (int 1st=0;1st<a->size;1st++)
        {
            if(a->array[a->indx[pos]]<a->array[a->indx[1st]])
            {
                int temp=a->indx[pos];
                a->indx[pos]=a->indx[1st];
                a->indx[1st]=temp;
            }
        }
    }
    
}

void prntAry(int *a, int size, int perLine)
{
    cout<<endl;
    for(int i=0;i<a->size;i++)
    {
        cout<<a->array[a->indx[i]]<<" "<<;
        if (i%perLine==(perLine-1))<<endl;
    }
    cout<<endl;
    
}

void prntStr(IndxCol *a, int perLine)
{
    cout<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<a->array[a->indx[i]]<<" "<<;
        if (i%perLine==(perLine-1))<<endl;
    }
    cout<<endl;
    
}

IndxCol *fill(int n)
{
    //Allocate memory
    IndxCol *col=new IndxCol;
    if (n<=1)n=2;
    col->size=n;
    col->array=new int[n];
    col->indx=new int[n];
    for (int i=0;i<n;i++)
    {
        col->indx[i]=i;
        col->array[i]=rand()%90+10;
    }
}

