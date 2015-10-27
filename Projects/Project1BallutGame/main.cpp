/* 
 * File:   main.cpp
 * Author: Eduardo rangel
 * Purpose: Create the bluts game 
 * Created on October 18, 2015, 5:40 PM
 */
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <cstdlib>
//System libraries
using namespace std;
//User libraries

//Global Constants

//Structs
//player information and the player dice
struct PlyrInf
{
    string name;//name of the player 
    int plyrOne;//player number one
    int dice1, dice6;
    int dice2, dice7;
    int dice3, dice8;
    int dice4, dice9;
    int dice5, dice10;
    int sum;
};

//struct that holds all the computer dice
struct Computer
{
    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int dice5;
    int sum;
};
//function prototypes
void rules();
void game();
void file();
int randm();
void player1();
void winner();
//execution begins here
int main(int argc, char** argv) {
    //declare variables
    int choice;
    PlyrInf info;
    
    //Propt user for input 
    cout<<"Please choose of the following options and enter a number from 1-3"<<endl;
    cout<<"1. Play the game the game \n";
    cout<<"2. Read the rules \n";
    cout<<"3. Exit"<<endl;
    cin>>choice;
    
    //use the menu to let the player choose what he wants to do
    switch(choice)
    {
        //play the game
        case 1:{
            randm();
        }
    
    break;
    //read the rules
        case 2:
    {
       rules();
        
    }
        break;
        //exit the program
        case 3:
        {
           cout<<"Thank you for coming Bye!!"<<endl; 
        }
        break;
            
        default:;
}
    
    //exit stage right
    return 0;
}

int randm()
{
    //declare variables
    
    cout<<endl;
    srand(static_cast<unsigned int>(time(0)));
    string side, word;
    const int size = 2;
    string flip[size] = {"Heads", "Tales"};
    //prompt user for input 
    cout<<"Choose which side of the coin you want to go with Heads or Tales, make sure you use capital letter at the beginning of your choice"<<endl;
    cin>>side;
    //toss the coin and see who wins 
    //use the array to toss the coin and see who wins to start the game
    word = flip[rand() % 2];
    cout<<word;
    //indent the line
    cout<<endl;
    //if else statement to state which side wins and what happens next
    if (side == word)
    {
        cout<<"You win the coin toss you start the game"<<endl;
        player1();
        
    }else 
    {
        cout<<"Player two wins the coin toss he starts the game"<<endl;
        game();
    }

}

//player one game
void player1()
{
    srand(static_cast<int>(time(0)));
    int total = 3;
    int round = 28;
    string roll;
    string reroll;
    Computer player2;
    //string roll;
    PlyrInf player;
    //loop the game until one of the two player loses the game
    do{
        cout<<"To roll your dice please enter roll"<<endl;;
        cin>>roll;
        
        //roll the dice
        if ( roll == "roll")
        {
          player.dice1 = rand() % 6 + 1;
          player.dice2 = rand() % 6 + 1;
          player.dice3 = rand() % 6 + 1;
          player.dice4 = rand() % 6 + 1;
          player.dice5 = rand() % 6 + 1;
        }
        total--;
        //round--;
        cout<<total<<endl;
        cout<<"Dice 1 is: "<<player.dice1<<endl;
        cout<<"Dice 2 is: "<<player.dice2<<endl;
        cout<<"Dice 3 is: "<<player.dice3<<endl;
        cout<<"Dice 4 is: "<<player.dice4<<endl;
        cout<<"Dice 5 is: "<<player.dice5<<endl;
        
        //Summall the dice
        player.sum = player.dice1 + player.dice2 + player.dice3 + player.dice4 + player.dice4;
        //output the sum
        cout<<"The total is: "<<player.sum<<endl;
        
        //Prompt user for input
        cout<<"If you want to reroll the dice again please enter reroll if not enter no"<<endl;
        cin>>reroll;
        
        if (reroll == "reroll")
        {
            player1();
        }
        else if (reroll == "no")
        {
            game();
        }
        
        
        
    }while(total != 0 || round != 0);
}
//function to output the rules of the game
void rules()
{
   //Output the rules of the game
    cout<<"Baluts Game Rules"<<endl;
    cout<<"1. Each player needs 5 dice \n";
    cout<<"2. Each player needs to throw the five dies at least once \n";
    cout<<"3. Each player has the opportunity to throw each dice 3 times \n";
    cout<<"4. Is a 28 round game each round you can throw your dice 3 times \n";
    cout<<"5. The points are calculated as follows each time you throw a dice you get the points that the dice is facing up for example ";     
    cout<<"3,2,4,5,1 would be 3+2+4+5+1= 15 \n";
    cout<<"6. to win the game you need to add up all the points you get by throwing your dice in the 28 rounds and whoever gets the most points wins the game \n";
    cout<<"7. The highest score you can get in a roll is 30"<<endl;
    
}

//function to 
void game()
{
   //declare variables
    Computer player2;
    int choose;
    int total = 3;
    int round = 28;
    string choice;
    srand(static_cast<int>(time(0)));
    cout<<"please enter number 1 to let the computer roll the dice"<<endl;
    cin>>choose;
    
    if (choose == 1)
    {
    do{
        player2.dice1 = rand() % 6 + 1;
        player2.dice2 = rand() % 6 + 1;
        player2.dice3 = rand() % 6 + 1;
        player2.dice4 = rand() % 6 + 1;
        player2.dice5 = rand() % 6 + 1;
        
        //output all the dice
        cout<<"Dice 1 is: "<<player2.dice1<<endl;
        cout<<"Dice 2 is: "<<player2.dice2<<endl;
        cout<<"Dice 3 is: "<<player2.dice3<<endl;
        cout<<"Dice 4 is: "<<player2.dice4<<endl;
        cout<<"Dice 5 is: "<<player2.dice5<<endl;
        
        //do the substraction each time the computer throws the dice for each round
        total--;
        round--;
        player2.sum = player2.dice1 + player2.dice2 + player2.dice3 + player2.dice4 + player2.dice5;
        
        cout<<"The total is: "<<player2.sum<<endl;
        
        player1();
        
        //sum all the dice
        
 
    }while (total != 0 || round != 0);
    
    }    
    
}

