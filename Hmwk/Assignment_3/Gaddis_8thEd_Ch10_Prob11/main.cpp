/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Speaker's Bureau
 * Created on October 4, 2015, 4:16 PM
 */
//System libraries
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//User libraries

//global variables

//struct 
struct Bureau
{
    string name;//User name
    string phneNum;//user phone number
    string topic;//Speaking topic
    int feeRqed;//Fee required
};
//function prototypes
void getSpkr(Bureau *);
void prntSpk(Bureau *);
void edtSpkr(Bureau *);

//execution begins here
int main(int argc, char** argv)
{
    //declare variables
    int SIZE = 10;
    int index;
    Bureau info[10];
    int menu;
    const int enter = 1,
    change = 2,
    print = 3,
    search = 4,
    leave = 5;

    //d0-while loop to keep looping until user decides to leave /switch menu
    do{
    cout << "Please select a choice from the menu.\n"
    << "1) Enter Speaker Information.\n"
    << "2) Change Speaker Information.\n"
    << "3) Print Speaker Information.\n"
    << "4) Search for Topic. \n"
    << "5) Leave this menu.\n"
    << "Select: ";
    cin >> menu;
    //Switch menu 
    switch (menu)
    {
    case enter:
    {

    getSpkr(info);
    }
    break;
    case change:
    {

    edtSpkr(info);
    }
    break;
    case print:
    {

    prntSpk(info);
    }
    break;
    
    deafault:;
    }
    } while (menu != leave);

    return 0;
}
void getSpkr(Bureau *p) //array name = pointer
{
    //declare variables
    int size = 10;
    for (int i = 1; i <= size; i++)
    {
    //Prompt user for information
    cout << "Please enter the following information for speaker number " << i << " : \n";
    cout << "Speaker Name:";
    cin.ignore();
    getline(cin, p[i].name);
    cout << "\nSpeaker Telephone Number:";
    cin.ignore();
    getline(cin, p[i].phneNum);
    cout << "\nSpeaker Topic:";
    cin.ignore();
    getline(cin, p[i].topic);
    cout << "\nFee Required:";
    cin >> p[i].feeRqed;
    }
}
//function to print information
void prntSpk(Bureau *p)
{
    //declare variables
    int i = 0;
    int size = 10; // Array size
    for (i = 0; i < size; i++)
    {
        //prompt user for input
        cout << "The information entered for each speaker is: \n";
        cout << "Speaker " << i << endl;
        cout << "Speaker Name: " << p[i].name << endl;
        cout << "Speaker Telephone Number: " << p[i].phneNum << endl;
        cout << "Speaker Topic: " << p[i].topic << endl;
        cout << "Speaker Fee Required: " << p[i].feeRqed << endl;
}
}

//function to edit information
void edtSpkr(Bureau *p)
{
    int i;
    cout << "Please enter the number of the speaker you would like to edit."
    << endl;
    cin >> i;
    if (i <= 9)
    {
        cout << endl;
        cout << "Please enter the updated information of the speaker: \n";
        cout << "Speaker Name:";
        cin.ignore();
        getline(cin, p[i].name);
        cout << "\nSpeaker Telephone Number:";
        getline(cin, p[i].phneNum);
        cout << "\nSpeaker Topic:";
        getline(cin, p[i].topic);
        cout << "\nFee Required:";
        cin >> p[i].feeRqed;
      }
    else
    {
    cout << "Please pick a number between 0-9" << endl;

    }
}



