/* 
 * File:   Numbers.cpp
 * Author: Eduardo Rangel
 *
 * Created on November 5, 2015, 9:19 AM
 */

#include <iostream>
#include "Number.h"
Number::Number(int num)
{
    if (num < 0)
    {
        do{
            cout<<"Please enter the number again but remember it should be a positive number"<<endl;
            cin>>num;
            
        }while (num < 0);
    }
    this->number=num;
}

void Number::print()
{
    //array holding the values less than 20
    string a[] = {"zero","one","two","three","four","five","six","seven",
                  "eight","nine","ten","eleven","twelve","thirteen","fourteen",
                  "fifteen","sixteen","seventeen","eighteen","nineteen"};
    
    //holds numbers higher than 20
    string b[] = {"not","not","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    
    if(number > 999){cout << a[number/1000] << " thousand ";}
    if(number > 99){cout << a[number%1000/100] << " hundred ";}
    if(number%100/10 > 20){cout << b[number%100/10] << " " << a[number%10] << " dollars ";}
    if(number%100/10 < 20){cout << a[number%100] << " dollars ";}
    
    
}

Number::~Number()
{
    
}
