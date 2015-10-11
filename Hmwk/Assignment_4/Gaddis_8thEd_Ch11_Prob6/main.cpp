/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Soccer scores
 * Created on October 9, 2015, 6:32 PM
 */
//System libraries
#include <iostream>
#include <string>

using namespace std;
//User libraries

//Global constants

//structs
struct plyrInf
{
    string name;//player name
    int number;//Player number
    int ptsSc;//points scored by player
    float high;//highest scores
    float total;//total of all team
};

//Function Prototypes
void info(plyrInf &);//polayer information/data
float ttlPnts(plyrInf [], int);//calculate the points by all the players
float hPoints(plyrInf [], int, int &);//Highest player with points
void teamPnt(plyrInf [], int);//team points
//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    const int size = 2;
    plyrInf soccer[size];
    int highest;
    
    //get the information for all the players using a for loop
    for (int i = 1; i<= size;i++)
    {
        cout<<endl;
        cout<<"Player: "<<i<<endl;
        info(soccer[i]);
    }
    
     //Call the total points function
    cout<<"The total amount of points for the team is: "<<ttlPnts(soccer, size);
    cout<<endl;
    
    //player with the highest score
    float mstPts = hPoints(soccer, size, highest);
    cout << "Highest points " << mstPts << " \n";
    cout << "Player " << highest << " had the most points. \n";
    
    //Display all team information
   // teamPnt(soccer, size);
    
    
    return 0;
}

//Function to get all the player data
void info(plyrInf &data)
{
    //Prompt user for input
    cout<<"Please enter the name of the player"<<endl;
    //getline(cin, data.name);
    cin>>data.name;
    
    cout<<"Please enter the number of the player"<<endl;
    cin>>data.number;
    
    cout<<"Please enter total points scored by the player"<<endl;
    cin>>data.ptsSc;
    
    while (data.ptsSc < 0)
    {
        cout<<"Please enter total points scored by the player (no negative numbers)"<<endl;
        cin>>data.ptsSc;
    }
    
   
    
}

float ttlPnts(plyrInf data[], int size)
{
    //declare variables
    float points = 0;
    //for loop
    for(int i=1;i<size;i++)
    {
        points = data[i].ptsSc;
        
        return points;
    }
    
    
}

float hPoints(plyrInf data[], int size, int &player)
{
    float highest =0;
    // step through the array and look for the highest value
    for (int i =1; i < size; i++)
    {
        if (data[i].high > highest)
        {
            // save this value as the highest
            highest = data[i].high;       
            // save the number of the player
            player = i;
        }
    }
    // return the highest points
    return highest;

     

}

void teampnt(plyrInf data[], int size)

{
    float teamTtl=0;
    // step through the array
    for (int i = 0; i < size; i++)
    {
        cout << "Player name: " << data[i].name << endl;

        cout << "Player number: " << data[i].number << endl;

        cout << "Points for player: " << data[i].ptsSc<< endl;

        cout << endl;
        // Calculate the total for the team

        teamTtl += data[i].ptsSc;
    }
    cout << "Total Points for team: " << teamTtl << endl;

}
   