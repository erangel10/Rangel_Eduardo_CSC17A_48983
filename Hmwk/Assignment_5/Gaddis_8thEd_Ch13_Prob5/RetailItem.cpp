/* 
 * File:   RetailItem.cpp
 * Author: Eduardo Rangel
 * Created on November 3, 2015, 9:19 AM
 */

#include <string>

using namespace std;
#include "RetailItem.h"


RetailItem::RetailItem(string s, int a, float f)
{
    this->description = s;
    this->unitsOnHand = a;
    this->price = f;
    
}

RetailItem::RetailItem(const RetailItem& orig)
{
 
    
    
}

RetailItem::~RetailItem()
{
   
   
}