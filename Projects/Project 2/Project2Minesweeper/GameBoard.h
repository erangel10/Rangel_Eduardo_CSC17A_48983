/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Project 2 Minesweeper 
 * Created on November 24, 2015, 5:10 PM
 */

#ifndef GAMEBOARD_H
#define	GAMEBOARD_H

#include "Abstracts.h"

/// Base class for games that require an n*m array such as minesweeper

class GameBoard: public Abstracts{
private:
    
protected:
    int **data;
    int rows;
    int cols;
    virtual void create(int, int);

public:
    /// output this if user tries to set negative rows or columns
    class wrong{};
    
    GameBoard(int rows, int cols) {create(rows,cols);clear();}
    virtual ~GameBoard(){destroy();}
    virtual void destroy();
    virtual void setRows(int);
    virtual void setCols(int);
    virtual int getRows() const {return rows;}
    virtual int getCols() const {return cols;}
    virtual void clear();
    virtual void setUpG();//setup the game
    virtual void loadGame();
    virtual void print() const;
    int* operator[](int index) { return data[index];}
    int* operator[](int index) const { return data[index];}
};

#endif	/* GAMEBOARD_H */

