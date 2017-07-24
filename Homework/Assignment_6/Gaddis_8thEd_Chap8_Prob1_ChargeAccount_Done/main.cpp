/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 24, 2017, 12:25 AM
 * Purpose:  Check to see if the entered card number is valid
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare and initialize variables
    const short SIZE=18;     //Array size and array initialization values
    long acnts[SIZE]=  {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    long usrInpt;//User input
    
    //Header
    cout<<"Please Enter Your Charge Account Number Sir\n";
    
    //Input data
    cin>>usrInpt;   
    
    //Searching for value
    int i=0;
    bool found=false;//Says if num is valid or not
    while(i<SIZE&&!found){
        if(acnts[i]==usrInpt)
            found=true;
        i++;
    }    
    //Output the transformed data
    if(found)
        cout<<"\nYour Number Has Been Validated";
    else
        cout<<"\nInvalid Charge Account Number Entry";
    //A Sebastian Production
    return 0;
}