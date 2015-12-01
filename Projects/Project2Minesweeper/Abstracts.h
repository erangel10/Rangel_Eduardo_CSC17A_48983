/* 
 * File:   Abstracts.h
 * Author: Eduardo Rangel
 *
 * Created on November 24, 2015, 4:30 PM
 */

#ifndef ABSTRACTS_H
#define	ABSTRACTS_H

class Abstracts
{
    virtual void setRows(int) = 0;
    virtual void setCols(int) = 0;
    virtual int getRows() const = 0;
    virtual int getCols() const = 0;
    virtual void setUp() = 0;
    virtual void print() const = 0;
    
};


#endif	/* ABSTRACTS_H */

