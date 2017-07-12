/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 6:52 PM
 * Purpose:  Budget analysis for a month. user enters budget
 * and then daily expenses;
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //For Formatting
#include <cmath>     //For absoute value of a float
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float budget,//Total monthly budget
          expense=0,//Each expense
          totExpn,//The total of all expenses
          ovrUndr;//Over or under the budget
    short amount;//The amount of daily expenses
    
    //Header
    cout<<"This is a monthly budget calculator. First enter your budget\n"
            "and press enter and then you will be prompted to input your\n"
            "monthly expenses after that\n\n\n";

                          
    //Input and process data
        cout<<"Enter the amount of monthly expenses you wish to add\n";
    cin>>amount;            //getting expense number
    while(amount<0){
        cout<<"You can't have less than 0 expenses. Enter again\n";
        cin>>amount;            //Input validation
    }
    
    cout<<"Input your total monthly budget\n$";
    cin>>budget;                    //Getting budget amount
    
    if(budget<0)                //Answer validation
        cout<<"Wow you must be really poor. Lets us continue anyway\n";
    
    for(int count=1;count<=amount;count++){ 
        cout<<"Enter expense #"<<count<<"\n$";
        cin>>expense;    
        totExpn+=expense;
    }
    ovrUndr=budget-totExpn;
    
    //Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl<<endl<<"Your total monthly expenses is $"<<totExpn<<endl;
    
    if(totExpn<budget)
        cout<<"You managed to stay $"<<ovrUndr<<" under budget";
    else if(totExpn>budget)
        cout<<"You overspent by $"<<abs(ovrUndr);
    else
        cout<<"You spent exactly the amount you had set aside for your budget";
    
    
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}