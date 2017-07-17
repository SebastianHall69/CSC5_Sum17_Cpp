/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Functions to output temp table
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius1(float);          //Function for converting and building table

//Execution begins here
int main() {
    //Declare variables
    float celsius,f=0;//Celsius and Fahrenheit
    
    //Input data
    cout<<"Fahrenheit To Celsius Table\n\n";//Header
    
    //Map inputs to outputs or process the data
    cout<<"Fahrenheit\tCelsius\n\n";//Table Header
    
    celsius=celsius1(f);        //Function call
    
    //A Sebastian Production
    return 0;
}

float celsius1(float f){
    float c=0;
    for(int count=0;count<21;count++){//Loop for table
        c=0.5555555*(f-32);             //Converting
        cout<<f<<"\t\t"<<c<<endl;   //Outputting
        f++;    //Increasing F by one each iteration
    }   
}