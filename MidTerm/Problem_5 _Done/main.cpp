/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 11, 2017, 12:47 AM
 * Purpose:  Problem #5. The wage calculator problem
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(){

    //Declare Variables
    float strtPay,//The initial straight pay entered by the user
    fnlPay;//The final given to the employee

    int hours,//The hours worked. Inputted by the user
     dubs,//The double time pay rate
    trips;//The triple time pay rate



    //Initialize Variables
    dubs=2;//Double Payrate
    trips=3;//Triple Payrate

    //Header
    cout<<"Welcome To The Deluxe Job Wage Calculator 3000\n"
           "Press Enter To Begin\n";
    cin.get();

    //Prompt Answer
    cout<<"\nPlease Enter Your Standard Wage In Dollars Per Hour: $";  
    cin>>strtPay;                          //Hourly Wage Input
    while(strtPay<=0){                  //Input Validation
        cout<<"\n\nEven poor people get paid more than nothing. Try inputting"
                "\na different answer: $";
        cin>>strtPay;
    }

    cout<<"\nPlease Enter The Amount Of Whole Hours Worked This Week: ";
    cin>>hours;
    cout<<" hours"<<endl<<endl<<endl;     //Hours Worked Input
    while(hours<=0){                      //Input Validation
        cout<<"\nYou had to have worked some hours. Try inputting a valid\n"
                "hours amount: ";
        cin>>hours;
        
    }
     while(hours>159){
        cout<<"\nThat amount of hours is not feasible. "
                "Enter a realistic input\n";
        cin>>hours;
        
    }

    //Set Formatting Standards For Output
    cout<<fixed<<setprecision(2)<<showpoint;


    //Process Data and Output Results
    if(hours<=20){
        fnlPay=strtPay*hours;			//Straight Pay
        cout<<"Pay: $"<<fnlPay;
    }

    else if(hours>20&&hours<=40){
        hours=hours-20;
        fnlPay=hours*strtPay*dubs+20*strtPay;
        cout<<"Pay: $"<<fnlPay;			//Double Time Pay

    }

    else { 
        hours=hours-40;
        fnlPay=hours*strtPay*trips+20*strtPay*dubs+20*strtPay;
        cout<<"Pay: $"<<fnlPay;			//Triple Time Pay
    }
//A Sebastian Production
return 0;
}