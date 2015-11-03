/* 
 * File:   Inventory.cpp
 * Author: Eduardo Rangel
 * Created on November 3, 2015, 10:04 AM
 */

#include "Inventory.h"

using namespace std;

//set inventory equal to zero
Inventory::Inventory()
{
    itemNum = 0;
    cost = 0;
    quantity = 0;
}

Inventory::Inventory(int item, int quantity, float cost)
{
    setItem(item);
    setQuant(quantity);
    setCost(cost);
}

float Inventory::getTotal()
{
    setTotal();
    return ttlCost;
}

Inventory::~Inventory()
{
    
}

