/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Project 2 Minesweeper 
 * Created on November 24, 2015, 5:10 PM
 */

#ifndef ABSTRACTS_H
#define	ABSTRACTS_H

class Abstracts {
    protected:
    virtual void setRows(int)=0;
    virtual void setCols(int)=0;
    virtual int getRows() const =0;
    virtual int getCols() const =0;
    virtual void setUpG()=0;
    virtual void print() const = 0;
};

#endif	/* ABSTRACTS_H */

