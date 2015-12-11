/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Project 2 Minesweeper 
 * Created on November 24, 2015, 5:10 PM
 */

#include <iostream>
#include "gameBoard.h"

using namespace std;

/// Function that creates the grid on which game will be played
void GameBoard::create(int row, int col) {
    /// dinamically create a Minesweeper
    rows=row;
    cols = col;
    
    /// Set up the rows
    data = new int *[rows];
    
    /// Create each column
    for (int row = 0; row != rows; ++row)
        data[row] = new int [cols];
}

/// Function resets the GameBoard to initial in order to use it again
void GameBoard::clear() {
    for (int i = 0; i != rows; ++i)
        for (int j = 0; j != cols; ++j)
            data[i][j] = 0;
}

/// Function deallocates memory
void GameBoard::destroy() {
    /// delete each dynamically allocated row
    for (int i = 0; i != rows; ++i)
        delete[] data[i];
    /// delete the dynamically allocated structure
    delete data;
}

void GameBoard::setRows(int row) {
    if ( row <= 0 )
        throw wrong();
    rows = row;
}

void GameBoard::setCols(int col) {
    if (col <= 0 )
        throw wrong();
    cols = col;
}

void GameBoard::print() const {
    for (int i = 0; i != rows; ++i){
        for (int j = 0; j != cols; ++j) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void GameBoard::loadGame() {
    cout << "Calling the the base class loadGame. "
            " should be calling the derived class version.\n";
}

void GameBoard::setUpG() {
    cout <<"Calling the wrong function. Use polymorphism to call the derived"
    "class setUp function\n";
}