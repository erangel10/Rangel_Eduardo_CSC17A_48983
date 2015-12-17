/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Project 2 Minesweeper 
 * Created on November 24, 2015, 5:10 PM
 */

///System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;
//user libraries
#include "Minesweeper.h"
#include "Templates.h"

//Global constants

//function prototypes
void GameRules();
//execution begins here
int main(int argc, const char * argv[]) {
    ///call function here to show the game rules
    GameRules();
    
    ///Cast for random time seed generator
    srand(static_cast<unsigned int>(time(0)));

    Game<GameBoard> m(new Minesweeper(10,10));
    //throw the exeption
    try {
        m->setUpG();
    }
    ///error output
    catch (Minesweeper::wrong) {
        cout << "Size was invalid\n";
    }
    catch (const char* s) {
        cout << s << endl;
    }
    
    return 0;
    
    ///Exit stage right
}

///function to output the rules at the beginning of the game
void GameRules()

{
  cout<<"                     ~~~~~~~~~~~~ Minesweeper Rules ~~~~~~~~~~~~~"<<endl;
  
  cout<<"Welcome to Minesweeper those below aree the rules to play this game enjoy and good luck"<<endl;
  
  cout<<"In Minesweeper you have to choose a difficulty level from the following easy, normal, and hard"<<endl;
  
  cout<<"The game consists of you entering the coordinates in the game board which depends on the type of board you choose"
        "it could be from a 1x1 to a 10x10 (rows x columns)"<<endl;
  cout<<"each time you choose a coordinate you will uncover it and you have to do it until you find a mine which ends the game and you loose"<<endl;
  
  cout<<"If you uncover all of the coordinates in the game board but one which should be the mine you win the game"<<endl;
  
  cout<<"              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl;
  
}
