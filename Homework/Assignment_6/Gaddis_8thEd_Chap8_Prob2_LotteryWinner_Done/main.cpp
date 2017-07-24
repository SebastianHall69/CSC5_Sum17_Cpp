/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 24, 2017, 1:37 AM
 * Purpose:  have players regular numbers already. User inputs 
 *           winning number to see if they won anything.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare and initialize variables
    bool win=false;//Determines if winner or not
    const short SIZE=10;//Array Size
    int num;//User entered number
    int regular[SIZE]={13579, 26791, 26792, 33445, 55555,
                       62483, 77777, 79422, 85647, 93121};
                        //Array numbers
    //Header
    cout<<"Hello Lottery Player, Enter This Weeks Winning Number\nTo See "
            "If It Matches Any Of Your Lucky Combinations\n";
    //Input
    cin>>num;       //Inputting winning ticket
    
    //Map inputs to outputs or process the data
    for(int i=0;i<SIZE;i++){
        if(regular[i]==num)                 //Seeing if any tickets matched
            win=true;
    }
    
    
    //Output the transformed data
    if(win)                         //If ticket won
        cout<<"\nOne Of Your Tickets Won This Week";
    else                            //If ticket lost
        cout<<"\nYou Won Nothing This Week";
    
    //A Sebastian Production
    return 0;
}