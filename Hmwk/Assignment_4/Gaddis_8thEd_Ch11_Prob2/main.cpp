/* 
 * File:   main.cpp
 * Author: Eduardo rangel
 * Purpose: Movie Data
 * Created on October 7, 2015, 5:40 PM
 */
//System Libraries
#include <iostream>
#include <string>

using namespace std;
//user libraries

//Global constants

//Structs
struct mveData{
    
    string title;//movie title
    string directr;//movie director
    int year;//year released
    int time;//movie time in minutes
    int cost;//Production costs
    float revenue;//movie revenue 1st year
};
//Function Prototypes
void mvePrnt(mveData);//print all movie information
void mveInfo(mveData &);//movie info

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    mveData movie1;
    
    //call the movie info section
    mveInfo(movie1);
    
    //Call the movie printing function
    mvePrnt(movie1);
    
    return 0;
}

//function to get all  the movie information
void mveInfo(mveData &data1)
{
    //Prompt user for input
    cout<<"Please enter the title of the movie"<<endl;
    getline(cin, data1.title);
    
    cout<<"Please enter the name of the movie director"<<endl;
    getline(cin, data1.directr);
    
    cout<<"Please enter the year of the movie"<<endl;
    //getline(cin, data2.year);
    cin>>data1.year;
    
    cout<<"Please enter the running time (in minutes)"<<endl;
    //getline(cin, data2.time);
    cin>>data1.time;
    
    cout<<"Please enter the production costs for the movie"<<endl;
    cin>>data1.cost;
    
    cout<<"Please enter the first year's revenue for the movie"<<endl;
    cin>>data1.revenue;
   
}

void mvePrnt(mveData data1)
{
    //output movie data
    cout<<"The movie Title is: "<<data1.title<<endl;
    
    cout<<"The movie Director is: "<<data1.directr<<endl;
    
    cout<<"The year of the movie is: "<<data1.year<<endl;
    
    cout<<"The time of the movie is: "<<data1.time<<endl;
    
    cout<<"The production cost for the movie was: "<<data1.cost<<endl;
    
    cout<<"The movie revenue for the first year was: "<<data1.revenue<<endl;
}
