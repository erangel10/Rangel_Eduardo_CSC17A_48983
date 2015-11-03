/* 
 * File:   RetailItem.h
 * Author: Eduardo Rangel
 * Created on November 3, 2015, 9:19 AM
 */
#ifndef RETAILITEM_H
#define	RETAILITEM_H
#include <string>

using namespace std;

class RetailItem
{
    //declare variables as a private
    private:
        string description; 
        int unitsOnHand;
        float price;
        
        
    public:
       RetailItem(string, int, float);
       RetailItem(const RetailItem& orig);
       string getDesc(){return this->description;}
       int getUnit(){return this->unitsOnHand;}
       float getPrice(){return this->price;}
       virtual ~RetailItem();
};


#endif	/* RETAILITEM_H */

