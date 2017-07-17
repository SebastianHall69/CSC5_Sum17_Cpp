/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 17, 2017, 12:07 AM
 * Purpose:  Function to calculate the population size of a given year
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float aDRate(float);//Death rate
float aBRate(float);//Birth rate

//Execution begins here
int main() {
    //Declare variables
    int iPop,//Initial population of that year
        aBR,//Annual birth Rate
        aDR,//Annual death rate
        nYears;//Number of years to display
    
    //Input data
    cout<<"Population Data Grapher\n\nEnter the initial population amount\n";
    cin>>iPop;                                  //Getting initial population
    while(iPop<100){
        cout<<"\nPopulation must start higher than 100. Enter again\n";
        cin>>iPop;                //Getting and validating initial population
    }
    cout<<"\nEnter the number of years you wish to run the simulation for\n";
    cin>>nYears;
    while(nYears<1){                        //Getting and validating years
        cout<<"\nThe program must run for at least 1 year\n";
        cin>>nYears;
    }
    
    
    //Map inputs to outputs or process the data
    aDR=aDRate(iPop);//Function call for death rate
    aBR=aBRate(iPop);//Function call for birth rate
    
    //Output the transformed data
    cout<<"\tPopulation\tDied\tBorn\n";             //output table with loop
    for(int count=1;count<=nYears;count++){
        cout<<"Year: "<<count<<"     "<<iPop-aDR+aBR<<   "\t "
                <<aDR<<"\t "<<aBR<<endl;
        iPop+=aBR-aDR;
    }
    cout<<"\n\nNote: Death's and Birth's are for each year, not the total";
    //A Sebastian Production
    return 0;
}


float aDRate(float iPop){
    float perc,aDR;//Percentage and annual death rate
    cout<<"\nEnter The Annual Death Rate Of The Population (percentage)\n";
    cin>>perc;
    while(perc>100||perc<0){
        cout<<"\nIf only killing "<<perc<<"% of people was possible...\n"
                "Sadly it isn't . Enter a new value\n";
        cin>>perc;//Validating answer
    }
    aDR=perc*iPop/100;//died each year
    
    return aDR;
}


float aBRate(float iPop){
    float perc,aBR;//Percentage and annual birth rate
    cout<<"\nEnter The Annual Birth Rate Of The Population (percentage)\n";
    cin>>perc;
    while(perc>100||perc<0){//Validating answer
        cout<<"\nLast time I checked we are not South Asia\n"
                "Enter a new value\n";
        cin>>perc;
    }
    aBR=perc*iPop/100;//birthed each year
    
    return aBR;
}