/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 9:52 PM
 * Purpose:  displays number of calories burned on a 
 * treadmill at certain intervals
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float calPMin=3.6;//Calories per minute
    short minutes=30;

    //Header
    cout<<"This program displays the amount of calories burned\n"
            "at 5 minute intervals for half an hour\n"
            "Press enter to continue\n";
    cin.get();//Enter to continue
    cout<<endl<<endl;//Giving some aesthetic space
    
    
    //Output the table
    cout<<"Minutes"<<"\t\tCalories Burned\n\n";
    
    for(int count=5;count<=30;count+=5){
    
    cout<<count<<" Min           "<<calPMin*count<<" Calories"<<endl;
    }
    //A Sebastian Production
    return 0;
}