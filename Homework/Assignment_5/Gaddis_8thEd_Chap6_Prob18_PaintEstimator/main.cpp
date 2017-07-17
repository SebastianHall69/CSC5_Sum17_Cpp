/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Estimate the data of a paint job
 * using modular programming
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float tSqFt();//Total square feet
void dspInfo(float, float, float, float, float);//Display the info
float numGal(float);//Number of gallons
float numHour(float);//Number of hours

//Execution begins here
int main() {
    //Declare variables
    float   nGal,//Number of gallons required
            hLabor,//Hours of required labor
            pCost,//Cost of paint
            pGal,//Cost per gallon
            lCost,//Labor costs
            tCost,//Total cost
            totSqFt;//Total square feet
    
    //Input data
    cout<<"Paint Job Price Estimator\n\n";
    
    //Map inputs to outputs or process the data
    totSqFt=tSqFt();//Total square feet function call
    nGal=numGal(totSqFt);//Number of gallons through function call
    hLabor=numHour(totSqFt);//Hours of labor through function call
    cout<<"Enter the price per gallon of paint\n";
    cin>>pGal;//Getting the price per gallon of paint
    while(pGal<10){//Validation
        cout<<"\nPaint costs a minimum of $10.00 per gallon. Enter Again\n";
        cin>>pGal;
    }
    pCost=pGal*nGal;//Getting total paint price
    lCost=hLabor*25;//Getting total labor cost
    tCost=lCost+pCost;//Total cost of all
    
    //Output the transformed data
    dspInfo(nGal,hLabor,pCost,lCost,tCost);

    //A Sebastian Production
    return 0;
}


float tSqFt(){
    short rooms;//Number of rooms
    float total=0;//Total wall space
    float space;//Space on each wall
    cout<<"How many rooms will be painted?\n";
    cin>>rooms;
    while(rooms<1){
        cout<<"\nYou must have at least 1 room to paint. Enter again\n";
        cin>>rooms;
    }
    cout<<endl;
    for(short count=1;count<=rooms;count++){
        cout<<"What is the square footage in wall space in room "<<count<<endl;
    cin>>space;
    while(space<=0){
        cout<<endl<<"Spaces less than or equal to zero \n"
                "are not allowed. Enter again\n";
        cin>>space;
    }
    total+=space;
    cout<<endl;
    }
    return total;
}

float numGal(float totSqFt){
    float numGal=totSqFt/110;
    return numGal;
    
}

float numHour(float totSqFt){
    float hours;
    hours=totSqFt/110*8;
    
    return hours;
}

void dspInfo(float nGal,float hLabor,float pCost,float lCost,float tCost){
        cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"\nGallons Of Paint Required: "<<setw(3)<<nGal<<endl;
    cout<<"Hours Of Labor Required:     "<<setw(3)<<hLabor<<endl;
    cout<<"Total Cost Of Paint:        $"<<setw(3)<<pCost<<endl;
    cout<<"Total Cost Of Labor:        $"<<setw(3)<<lCost<<endl;
    cout<<"Total Cost:                 $"<<setw(3)<<tCost<<endl;
}