/* 
 * File:   Minesweeper.h
 * Author: admin
 *
 * Created on November 24, 2015, 5:40 PM
 */

#ifndef MINESWEEPER_H
#define	MINESWEEPER_H
#include <string>
#include "GameBoard.h"

using namespace std;


class Minesweeper : public GameBoard
{
    private:
        ///enumerate for the difficulty levels
        enum DLevel {Easy, Normal, Hard};
        
        ///enumerate for the flags       
        enum flags{Empty = 10, SPOT, CLEAR, LOSER};
        ///variables
        int mines;
        ///call function to destroy them
        void create(int, int);
        
        Minesweeper::DLevel difficulty(int);///dificulty
        bool validInput() const;
        int nMines(Minesweeper::DLevel) const;///number of mines
        void setMines();
        void setFlags();
        int adjacent(int, int, int = Minesweeper::SPOT) const;
        bool clear(int, int) const;
        void setPerimeter();
        void zeros() const;
        bool won() const;
        bool cont (int, int);
        void promptUser();
        string *uName();///user name
        
    public:
        ///constructors and destructors
        Minesweeper(int row, int col) : GameBoard(row, col){clearBoard();} 
        void setRows(int);
        void setCols(int);
        int getRows() const {return rows;}
        int getCols() const {return cols;}
        void print()const;
        void printO() const;
        void setUp() const;
        void playG() const;
        void clearBoard() const;
        void saveG() const;///saves the game
        void loadGame()const;///loads the game
        int getMines() const {return mines;}///indentify where the player discovers the mines
        ///pass the address to the operator
        Minesweeper& operator=(const Minesweeper&);
};

#endif	/* MINESWEEPER_H */

