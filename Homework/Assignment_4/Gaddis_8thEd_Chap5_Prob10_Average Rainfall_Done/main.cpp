/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 7:52 PM
 * Purpose:  Program with nested loops to calculate average 
 * rainfall over the years
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    short years,//The number of years
          totMon;//Total number of months
            
    float totRain=0,//Total rainfall
          monAver,//Monthly Average
          rainPM;//Rain per month
    
    //Header
    cout<<"Calculating the average rainfall. Use inches\n"
            "How many years are you looking to find the average\nfor?\n";
    //Input data
    cin>>years;
    
    while(years<0){
        cout<<"The years cannot be less than 0. Enter the years again\n";
        cin>>years;             //Input validation
    }
    cout<<endl;
    //Map inputs
    for(int count=1;count<=years;count++){      //Year loops
        
        for(short mIN=1;mIN<=12;mIN++){//mIN is months in the year
            cout<<"Enter the rainfall for month "<<mIN<<" of year "//Month loop
                    <<count<<endl;
            
            cin>>rainPM;
            
            while(rainPM<0){
                cout<<"The rain per month cannot be less than 0.\n Enter the"
                      " monthly rain again";
                cin>>rainPM;        //Input validation
            }
            totRain+=rainPM;//Total rain
        }
    }
    //Process data
    totMon=years*12;//Total months
    monAver=totRain/totMon;   //Average per month
    
    //Output the transformed data
    cout<<setprecision(5);//Setting output
    cout<<"The rainfall average was calculated for "<<totMon<<" months\n";
    cout<<"During this time, rainfall totalled "<<totRain<<" Inches\n";
    cout<<"That equates to an average of "<<monAver<<" inches per month";
    
    //A Sebastian Production
    return 0;
}