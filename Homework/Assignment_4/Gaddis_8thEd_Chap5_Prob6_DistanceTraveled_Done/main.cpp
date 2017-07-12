/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 9:07 PM
 * Purpose:  ask user speed and how long it has travelled
 * and output distance each hour
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float speed,time;//Speed and time
    
    //Header
    cout<<"You will be entering the speed of a vehicle and\nhow many"
            " hours it has travelled.\nPress enter to begin\n";
    cin.get();
    
    
    //Input data
    //Get speed
    cout<<endl<<"Enter the velocity in MPH of the vehicle\n";
    cin>>speed;
    while(speed<=0){//Validate
        cout<<endl<<"You need a speed greater than 0. Enter speed again\n";
        cin>>speed;
    }//Get time
    cout<<endl<<"Enter the time in hours the vehicle has travelled\n";
    cin>>time;
    while(time<=0){//Validate
        cout<<endl<<"A time of 0 or less is invalid. Enter a valid time\n";
        cin>>time;
    }

    
    //Map inputs to outputs or process the data
    for(int count=1;count<=time;count+=1){
        cout<<"Hour:\t\tDistance Travelled\n";
        cout<<count<<"\t\t"<<count*speed<<" miles"<<endl<<endl;
    }
    
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}