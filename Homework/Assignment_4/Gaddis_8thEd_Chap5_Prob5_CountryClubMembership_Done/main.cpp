/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 5:22 PM
 * Purpose:  Write a program to show projected 
 * rates over the next 6 years
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //For formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float basePrc=2500;//Initial price before increase
    float newPrc;//The new price after being inflated
    float rate=0.04;//The percentage raised    

    //Map inputs to outputs or process the data
    cout<<setprecision(2)<<fixed<<showpoint;//Formatting precision output
    cout<<"Membership Pricing For The Next Six Years\n\n";
    for(int count=1;count<7;count++){//Loop to repeat results
        basePrc+=basePrc*rate;       
        cout<<"The price for year "<<count<<" is $"<<basePrc<<endl;
    }
    
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}