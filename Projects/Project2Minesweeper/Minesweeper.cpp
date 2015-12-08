
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Minesweeper.h"

using namespace std;
//Create game board 
void Minesweeper::create(int row, int col)
{
    ///give them a value
   rows = row;
   cols = col;
   ///allocate number of rows
   data = new int *[rows];
   //create the columns
   for(int row=0;row !=rows;row++)
   {
     data[row] = new int [cols]; 
   }   
}
void Minesweeper::setRows(int row)
{
    if (row < 0)
    {
        throw Wrong();
        rows = row;
    }
}
void Minesweeper::setCols(int col)
{
  if (col < 0)
  {
      throw Wrong();
      cols = col;
  }
}

void Minesweeper::promptUser()
{
    ///declare variables
    int row;
    int difficultL;
    ///Prompt user for input 
    cout<<"Please enter the number of rows that you want into the game board form 1-10"<<endl;
    cin>>row;
    
    ///check information input
    if(row < 1 || row > 10)
    {
        throw Wrong();
        rows = row;
        cols = row;
        
        ///prompt user for the difficulty level
        cout<<"Please enter the difficulty level (1-3)\n";
         cout<< "1. Easy, 2. Normal, 3. Hard"<<endl;
            cin>>difficultL;
            mines = nMines(difficulty(difficultL));
    }
}

///this bool function will be returned if input is not worn
bool Minesweeper::validInput() const
{
    ///make sure the mines exist and are not exceded from the number of  mines present
    return (((rows * cols) > mines) && (mines>0));
}

//function to start setting up the game
void Minesweeper::setUp() const
{
    ///declare variables
    string answer;
    ///get username and keep it stored
   string *player = uName();
   ///Ask user to play the game
   cout<<"Hello"<<player<<endl;
   cout<<"Do you want to play the game ";
        "if yes enter yes if not enter no"<<endl;
        cin>>answer;
        
      ///decide what the player will do deppending on the answer choice
        
}
















