/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *
 * Created on October 8, 2015, 9:02 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
//User Libraries

//global constants
const int col = 10;//constant column for the game board

//Function prototypes
void rules();//Game rules
void gmeBrd(int [][col], int);//Game board

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and arrays
    const int Size = 10;
    //int board1;
    int board [10][10];
    
    //output game rules 
    //rules();//call the rules function
    rules();
    //call the board function
    gmeBrd(board, Size);
   // gmeBrd(board, Size);
    //cout<<gmeBrd<<endl;
    

    return 0;
}
//function to output the game rules
void rules()
{
    
}
//Function to start the game board
void gmeBrd(int board[][col], int Size)
{
    //Declare variables
    for(int i = 0;i<=col;i++)
    {
        for(int j=1;j <= Size; j++)
        {
            cout<<board[j][col]<<endl;
        }
    }
    
}