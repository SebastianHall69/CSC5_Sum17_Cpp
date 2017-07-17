/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Stock Profit
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float clcPrf(float, float, float, float, float);
//Execution begins here
int main() {
    //Declare variables
    float sP,//Sale Price Per Share
            nS,//Number of shares
            sC,//Sales commission paid
            pC,//Purchase commission paid
            pP,//Purchase price per share
            profit;//The profit or loss
    
    //Input data
    cout<<"To calculate the profit (or loss) of your stock sales\n"
            "Enter the data when prompted\n"
            "Enter the sale price per share\n";
    cin>>sP;
    while(sP<=0){
        cout<<"\nEnter a Valid Number\n";
         cin>>sP;                        //Entering each data and
    }                                           //Validating the input
    cout<<"\nEnter the number of shares\n";
    cin>>nS;
    while(nS<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>nS;
    }
    cout<<"\nEnter the sales commission paid\n";
    cin>>sC;
    while(sC<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>sC;
    }
    cout<<"\nEnter the purchase commission paid\n";
    cin>>pC;
    while(pC<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>pC;
    }
    cout<<"\nEnter the purchase price per share\n";
    cin>>pP;
    while(pP<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>pP;
    }
    
    //Map inputs to outputs or process the data
    profit=clcPrf(nS,sP,sC,pC,pP);
    
    //Output the transformed data
    if(profit>0){
    cout<<setprecision(2)<<fixed<<showpoint;    //outputting profits
    cout<<"\n\nYour Profit Is $"<<profit;
    }
    else if(profit==0)
            cout<<"//You have broken even";     //outputting even
    else {
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"\n\nYour Losses Are $"<<profit;      //outputting losses
    }
    //A Sebastian Production
    return 0;
}




float clcPrf(float nS,float sP,float sC,float pC,float pP){
    float profit=0;
    
    profit=((nS*sP)-sC)-((nS*pP)+pC);
    
    return profit;
}