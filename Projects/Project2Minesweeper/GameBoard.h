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
        
        void destroy();
        void setRows(int);
        void setCols(int);
        int getRows() const {return rows;}
        int getCols()const {return cols;}
        void clearBoard();
        void setUp();
        void loadGame();
        void print() const;
        int* operator[](int index){return data[index];}
        int* operator[](int index) const {return data[index];}
        
        
};


#endif	/* GAMEBOARD_H */

