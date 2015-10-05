/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: To find the average number of letters per word.
 * Created on October 4, 2015, 12:52 PM
 */
//System libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

using namespace std;
//User libraries

//global constants

//function prototypes
int wrdCnt(char []);//word count
float avgLetr (int, int, float);//letter average per word
//execution begins here
int main(int argc, char** argv)
{
    //decalre variables
    //array declared holding the maximum number of strings
    char cstring[81];
    int index, word, punct;
    float avg = 0.0, allChar = 0.0;
    //prompt user for input 
    cout << "\nEnter a string, 80 or fewer characters:\n";
    cin.getline(cstring, 81);
    //output
    cout << "\nThe number of words in that string: ";
    index = wrdCnt(cstring);
    cout << index << endl;
    //average function
    avg = avgLetr(word, punct, allChar);
    cout<<"The total average of letters per word is: "<<avg<<endl;
    //avg = avgLetr(word, punct, allChar);
    
    //exit
    
    return 0;
}

//function
int wrdCnt(char cstring[])//word count
{
    //declare variables
    int index = 0;
    int word = 0;
    //loop the cstring 
    while (cstring[index] != '\0')
    {
    //do not count the spaces
    if (isspace(cstring[index]))
    {
    while (isspace(cstring[index]))
    {
        index++;
    }
    }
    //count the words 
    if (isalnum(cstring[index]))
    {
        word++;
    while(islower(cstring[index]))
    {
        index++;
    }
    //loop 
    while((isalnum(cstring[index])) || ( ispunct(cstring[index])))
    {
        index++;
    }
    //keep index
    }
        index++;
    }
    return word;
}

//Average function
float avgLetr(int word,int punct, float allChar )
{
float avg = 0.0;
allChar = allChar - punct; // Subtracting Punctuatoin from All the
//characters in the string(not including spaces)
avg = (allChar / word);
return avg;
}


