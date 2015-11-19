/* 
 * File:   TimeOff.h
 * Author: admin
 *
 * Created on November 19, 2015, 9:35 AM
 */

#ifndef TIMEOFF_H
#define	TIMEOFF_H
class TimeOff
{
private:
    int sickTme;
    int vacation;
    int unpaid;
    
public:
    TimeOff();
    int getSicktime();
    int getVacations();
    int getUnpaid();
    
    

};


#endif	/* TIMEOFF_H */

