/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 9:28 PM
 * Purpose:  show the rising ocean levels of the next 25 years
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Setting width
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float ocnRise=1.5;//Rising 1.5 mm per year
    
    
    //Header
    cout<<"Total ocean rise over the next 25 years\n\n\n";
    
    
    //Map inputs to outputs or process the data
    for(int count=1;count<=25;count++){
        cout<<"Year: "<<count;
        cout<<setw(10)<<"Rise: "<<ocnRise*count<<"mm\n";
    }
    
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}