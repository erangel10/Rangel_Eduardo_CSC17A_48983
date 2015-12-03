/* 
 * File:   GameBoard.h
 * Author:Eduardo Rangel
 * Purpose:Project 2 Minesweeper 
 * Created on November 24, 2015, 4:22 PM
 */

#ifndef GAMEBOARD_H
#define	GAMEBOARD_H
#include "Abstracts.h"

class GameBoard : public Abstracts
{   
    private:
    
     protected:   
         int **data;
         int rows;
         int cols;
         virtual void create(int, int);
         
    public:
        //use this to let the player not enter any negative numbers
        class Wrong{};
        
        GameBoard(int rows, int cols){create(rows,cols);clearBoard();}
        
        virtual void destroy();
        virtual void setRows(int);
        virtual void setCols(int);
        virtual int getRows() const {return rows;}
        virtual int getCols()const {return cols;}
        virtual void clearBoard();
        virtual void setUp();
        virtual void loadGame();
        virtual void print() const;
        int* operator[](int index){return data[index];}
        int* operator[](int index) const {return data[index];}
        
        
};


#endif	/* GAMEBOARD_H */

