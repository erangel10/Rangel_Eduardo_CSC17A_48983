/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: 
 * Created on October 5, 2015, 1:31 PM
 */
//System libraries
#include <iostream>

using namespace std;
//user libraries

//Global constants

//function prototypes
int cntVowl(char * str);
int cntCons(char * str);
//execution begins here
int main(int argc, char** argv) {

    //declare variables
   const int SIZE = 81;          // Max size of the array
    //const int V_SIZE = 6;         // Size of the vowel array
    char userString[SIZE];
    //char vowels[V_SIZE] = {'a', 'e', 'i', 'o', 'u'};
    char choice;                  // To hold the menu choice
    char *strPtr = userString;    // Declare and initialize the pointer
    
    // Get the string from the user
    cout << "Please enter a string. (Maximum of 80 characters) :\n\n";
    cin.getline(userString, SIZE);
    
    // Display the menu and get a choice
    cout << "\n\nA. Count the number of vowels in the string \n";
    cout << "B. Count the number of consonants in the string \n";
    cout << "C. Count both the number of vowels and consonants in the string \n";
    cout << "D. Enter another string \n";
    cout << "E. Exit the program \n\n";
    cout << "Please make your selection: ";
    cin >> choice;
    
    // Menu selections
    if (tolower(choice) == 'a')
    {
         cntVowl(userString);
         cout << "This string contains " << cntVowl(userString);
         cout << " vowels. \n";        
    }
    else if (tolower(choice) == 'b')
    {
         cntCons(userString);
         cout << "This string contains " << cntCons(userString);
         cout << " consonants. \n";
    }
    else if (tolower(choice) == 'c')
    {
         cout << "This is not an actual requirement of the assignment.\n";
    }
    else if (tolower(choice) == 'd')
    {
         cout << "This is not an actual requirement of the assignment.\n";
    }
    else
    {
         cout << "This is not an actual requirement of the assignment.\n";
    }
        
 
    return 0;
}
//******************************************************************************
// Definition of countVowels. The parameter strPtr is a pointer that points to *
// a string.  The parameter char array [] is an array of vowels that the       *
// function searches for in the string.  The function returns the number of    *
// times the characters in the array appear in the string.                     *
//******************************************************************************
// Local variables
int cntVowl(char* str)//count vowels 
{
    int times = 0;            // To hold times vowels appear
    const int size = 6;
    char vowels[size] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char *vowelsPtr;
// Step through the string and count the occurrence of vowels
for(vowelsPtr = vowels; *vowelsPtr != '\0'; vowelsPtr++)
{
        while(*str != '\0')
         {
             if(tolower(*str) == *vowelsPtr)
             times++;
             str++;
         }
     return times;
}
}

// function for consonant letter
int cntCons(char *str)//count consonants
{
    int times = 0;            // To hold times vowels appear
    const int size = 22;
    char consonants[size] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
                             'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y',
                             'z', '\0'};
    char *consPtr;                           
    
// Step through the string and count the occurrence of vowels
for(consPtr = consonants; *consPtr != '\0'; consPtr++)
{
    while(*str != '\0')
            {
              if(tolower(*str) == *consPtr)
                 times++;
                 str++;
            }
     return times;
}
} 
    
    
    
    


