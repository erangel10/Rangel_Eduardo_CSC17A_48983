/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Create a Uno card game
 * Created on October 13, 2015, 9:05 AM
 */
//system libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;
//user libraries
//#include <Structs>

//global constants

//Function Prototypes
void rules();//game rules
void gamePly();//gameplay
int numPlys();//number of players
void twoPlys();//two players option
void fourPls();//four players 
//void cards(string [], int);
void cards();
//execution begins here
int main(int argc, char** argv) {
    //declare variables
    const int size = 5;
    //const string mainCrd[size]= {"Wild Draw 4", "Skip", "Draw Two", "Wild", "Reverse"};
    //srand(static_cast<int>(time(0)));
    
    
    cards();
   
    int choose;
    cout<<"Choose one of the following numbers"<<endl;
    cout<<"1. Read the game rules \n"<<
          "2. Choose the number of player from 2-4 \n"<<
          "3. Play the game \n" <<
          "4. Leave"<<endl;
    cin>>choose;
     //use switch statement to allow user to chose the option
    switch(choose)
    {
        case 1:
        {
            rules();
        }
            break;
            
        case 2:
        {
            numPlys();
            
        }
            break;
            
        case 3:
        {
            gamePly();
        }
            break;
        
        case 4:
        {
          cout<<"Thank you for coming"<<endl;  
        }
        
        default:;
    }
    
    
    
    return 0;
}

void rules()
{
    
    cout<<"Hello"<<endl;    
}
            //card types array
void cards()
{
    srand(static_cast<int>(time(0)));
    string word;
   
    //array holding the main card types 
    const string crd [5] = {"Wild Draw 4", "Skip", "Draw Two", "Wild", "Reverse"};
    
   word = crd[rand() % 5];
   
   cout<<word<<endl;
    
}


void gamePly()
{
    
    cout<<"Play"<<endl;
    
    
}

int numPlys()
{
    int number;
    //prompt user for input 
    cout<<"Please enter the number of players that are going to play the game"<<endl;
    cin>>number;
    
    while (number > 4 || number < 2)
    {
        cout<<"The game only allows a minimum of 2 players and a maximum of 4 please enter the number of players again"<<endl;
        cin>>number;
    }
    
    
    return number;
    
}



