/* 
 * File:   Midterm.h
 * Author: Eduardo Rangel
 * purpose: Midterm test
 * Created on April 23, 2014, 6:39 PM
 */

#ifndef MIDTERM_H
#define	MIDTERM_H



//Problem 1
struct Custom
{
    //declare variables
    int balance;
    int size;
    int account;
    int deposits;
    int checks;
    int *person;
    int totbal1;
    int totbal2;
};

//Problem 2
struct Employ
{
    //declare variables
    int *worker;//workers 
    int size;//size
    int hours;//hours worked
    int rate;//rate of pay
    int gross;//gross pay
};

//Problem 3
struct statsResult
{
    //declare variables
    float median;//medians
    float avg;//average
    int *modes;//modes
    int maxFreq;//maximum frequency
    int nModes;//number of modes
    
};

#endif	/* MIDTERM_H */

