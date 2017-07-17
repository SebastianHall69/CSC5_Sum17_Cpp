/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Use a function to calculate the falling distance of
 * an object
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float const GRAV=9.8;//Gravity in meters per second

//Function Prototypes
float fllDist(float, float);

//Execution begins here
int main() {
    //Declare variables
    float time;//Time variable in seconds
    float dstnc;//Distance fallen
    
    //Input data
    cout<<"This Program Will Calculate The Distance An Object Has Fallen\n";
    cout<<"To Calculate The Falling Distance Enter The\n"
            "Time In Seconds The Object Has Been Falling\n";
    cin>>time;

    //Map inputs to outputs or process the data

    
    dstnc=fllDist(time,GRAV);
  
    
    //Output the transformed data
    
   cout<<endl<<"The Distance Fallen = "<<dstnc<<" Meters";
    
    
    //A Sebastian Production
    return 0;
}

float fllDist(float time,float grav){
    int dist=0.5*GRAV*time*time;
    return dist;
}

