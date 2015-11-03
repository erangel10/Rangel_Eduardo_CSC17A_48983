/* 
 * File:   Inventory.h
 * Author: rcc
 *
 * Created on November 3, 2015, 10:04 AM
 */

#ifndef INVENTORY_H
#define	INVENTORY_H

class Inventory
{
    //declare variables as private
    private:
        int itemNum;//number of item
        int quantity;//quantity
        float cost;//cost of the item
        float ttlCost;//total cost
        void setTotal(){ttlCost = cost *quantity;}
        
    public:
        Inventory();
        Inventory(int, int, float);
        void setItem(int i){itemNum = 1;}
        void setQuant(int q){quantity = q;}
        void setCost(float c){cost = c;}
        int getItem(){return itemNum;}
        int getQuant(){return quantity;}
        float getCost(){return cost;}
        float getTotal();
        virtual ~Inventory();
};


#endif	/* INVENTORY_H */

