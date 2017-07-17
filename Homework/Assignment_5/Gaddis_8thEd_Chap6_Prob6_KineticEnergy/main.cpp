/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 16, 2017, 10:22 AM
 * Purpose:  Use a function to calculate kinetic energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kEnergy(float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float klGrams;//Mass in kilograms
    float velocity;//Velocity
    float kin; 
    
    //Input data                   //Getting Velocity
    cout<<"To Calculate The Kinetic Energy, Enter The Velocity\n"
            "In Meters Per Second\n";
    cin>>velocity;
                                //Getting Kilograms
    cout<<endl<<"Now Enter The Mass In Kilograms\n";
    cin>>klGrams;

    //Map inputs to outputs or process the data
    kin=kEnergy(klGrams,velocity);
                                    //Assigning return value to kin
  
    
    //Output the transformed data
    
    cout<<endl<<"Kinetic Energy Of: "<<kin; //outputting the kinetic energy
    
    
    //A Sebastian Production
    return 0;
}



float kEnergy(float klGrams,float velocity){
    float kin=0.5*(klGrams*velocity*velocity);      //Calculating kinetic energy
    return kin;             //Returning kin value
}