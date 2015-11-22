/* 
 * File:   ParkedCar.h
 * Author: Eduardo Rangel
 *
 * Created on November 20, 2015, 6:27 PM
 */

#ifndef PARKEDCAR_H
#define	PARKEDCAR_H
#include <string>

using namespace std;

class ParkedCar
{
    private:
        string make;
        string color;
        int model;
        int licNum;
        int time;
    
    public:
        ParkedCar();
        void setMake(string);
        void setColor(string);
        void setModel(int);
        void setLicNum(int);
        void setTime(float);
        string getMake(){return make;}
        string getColor(){return color;}
        int getModel(){return model;}
        int getLicNum(){return licNum;}
        int getTime(){return time;}
        virtual ~ParkedCar();
};

class ParkingMeter
{
    private:
        int minNum;
    
    public:
        ParkingMeter();
        void setMinutes(int);
        int getMinutes(){return minNum;}
        virtual ~ParkingMeter();
};

class ParkingTicket
{
    private:
        int fine;
        int additional;
    
    public:
        ParkingTicket();
        void setFine(int);
        void setAdditional(int);
        int getFine(){return fine;}
        int getAdditional(){return additional;}
        virtual ~ParkingTicket();
};


class PoliceOfficer
{
    private:
        int badgeNum;
        string name;
    public:
       PoliceOfficer();
       void setBadge(int);
       void setName(string);
       string getName(){return name;}
       int getBadge(){return badgeNum;}
       virtual ~PoliceOfficer();
};

#endif	/* PARKEDCAR_H */

