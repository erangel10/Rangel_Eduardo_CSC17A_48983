/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Make a structure and enter 10 structures for 10 people
 * Created on September 30, 2015, 9:39 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <String>
#include <iomanip>

using namespace std;
//User interface 

//Global constants
struct Bureau
{
    string name;//User name
    string phneNum;//user phone number
    string topic;//Speaking topic
    int feeRqed;//Fee required
};
//Function Prototypes 
void getSpkr(Bureau *);//get speaker information
void prntSpk(Bureau *);//print speaker information
void edtSpkr(Bureau *);//edit speaker info

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Bureau speaker;
    int numspkr = 10;//number of speakers
    int index;//counter in the for loop
    const int SIZE = 10;
    int choose;
    //declare array
    speaker info[10];
    
    //prompt user for input 
    
    cout << "Please select a choice from this submenu.\n"
             << "1) Enter Speaker Information.\n"
             << "2) Change Speaker Information.\n"
             << "3) Print Speaker Information.\n"
             << "4) Leave this menu.\n"
             << "Selection: ";
        cin >> choose;
        
        //switch menu
        
        switch (choose)
        {
            case 1:
            {
               getSpkr(info);                
            }
            break;
            
            case 2:
            {
                prntSpk(info);
            }
            break;
            
            case 3:
            {
                edtSpkr(info);
            }
            break;
            
            default:;
        
            
        }

    

    return 0;
}

//Function to get the speaker info
void getSpkr(Bureau *infmtn)//infmtn stands for information
{
   int SIZE = 10;
   
   for (int i = 1;i <= SIZE; i++)
   {
       //prompt user for information
       cout<<"Please enter the following information for the Speaker's Bureau"<<endl;    
       cout<<"Please enter the name: "<<endl;
       getline(cin, infmtn[i].name);
       cout<<"Please enter the Phone number: "<<endl;
       getline(cin, infmtn[i].name);
       cout<<"Please enter the topic: "<<endl;
       getline(cin, infmtn[i].name);
       cout<<"please enter the Fee Required: "<<endl;
       getline(cin, infmtn[i].name);
   }
    
    
}


//Function to print the speaker's information
void prntSpk(bureau *speaker)
{
    
    
    
}

//Function to edit speaker info
void edtSpkr(Bureau *speaker)
{
    
    
    
}