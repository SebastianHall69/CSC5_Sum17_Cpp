/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Use a function to calculate the retail price based
 * on the wholesale price and the markup percentage 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getVl();                       //Get Item Wholesale Value
float getMk();                      //Get the markup percentage
void calcRet(float, float);        //Calculate the retail price
//Execution begins here
int main() {
    //Declare variables
    float wValue;//Wholesale value
    float perc;//Percent markup

    //Input data
    wValue=getVl();//Getting wholesale value
    
    perc=getMk();   //Getting the percent marked up
            
    //Map inputs to outputs or process the data  
    calcRet(wValue, perc);      //Calculating the retail price
    
    //A Sebastian Production
    return 0;
}

float getVl(){ 
    float wValue;
    cout<<"To Calculate The Retail Value Of The Item First\nEnter The "
            "Products Wholesale Value. Do Not Use The Peso Or Rupee\n";
    cin>>wValue;
    while(wValue<=0){
        cout<<"We Don't Sell Items That Are Less Than Worthless, Try Again\n";
        cin>>wValue;
    }
    
    return wValue;
}

float getMk(){
    float perc;
    cout<<"\nNow Enter The Items Percentage Markup\n";
    cin>>perc;
    
    while(perc<0.001){
        cout<<"That Percentage would lose us money. Enter Another\nMore "
                "Profitable Percentage\n";
        cin>>perc;
    }
    
    return perc/100;
}

void calcRet(float wValue, float perc){
    float retail=0;//Final retail price
    retail=wValue+wValue*perc;        //Calculating and outputting price
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Retail Price:    $"<<retail;
}