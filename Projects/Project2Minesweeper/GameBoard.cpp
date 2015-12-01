#include "GameBoard.h"
#include <iostream>

using namespace std;


void GameBoard::create(int col, int row)
{
    //give the class variables a value
    rows = row;
    cols = col;
    
    //allocate data for the rows
    data = new int *[rows];
    
    //set up the columns     
    for (int row = 0;row != rows;++rows)
    {
        data[row] = new int [cols];
    }
    
}

//function to clear the board
void GameBoard::clearBoard()
{
    for (int i = 0; i != rows; ++i)
    {
       for(int j = 0;j!=cols;++j)
           data[i][j] = 0;
           
    }
}


//function to reset the game board 
void GameBoard::destroy()
{
   //destroy each column and row
    for (int i = 0; i != rows; ++i)
    {
        delete[] data[i];   
    }
    //delete the allocated data
    delete data;
}

//function to set the rows
void GameBoard::setRows(int row)
{
    if (row<=0)
    {
        throw Wrong();
        rows = row;
    }
}


//function to set the cols
void GameBoard::setCols(int col)
{
    if (col <= 0)
    {
       throw Wrong(); 
    }
    cols = col;
}

//function to print the board 
void GameBoard::print() const
{
   for (int i = 0;i != rows;++i)
   {
      for (int j = 0;j != cols;++j)
      {
         cout<< data[i][j];
      }
      cout<<endl;
   }
}

void GameBoard::loadGame()
{
    cout<<"Call the base class to load the game"<<endl;
}

void GameBoard::setUp()
{
    cout<<"Used when player calls the wrong function"<<endl;
}






