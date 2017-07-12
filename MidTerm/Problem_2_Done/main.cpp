/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 12, 2017, 2:50 AM
 * Purpose:  Problem #2. Four Character Input
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    char num1,num2,num3,num4;//Each digit of the 4 digit number
    int one=0,two=0,three=0,four=0;
    
    
    //Initialize Variables With User Input
    cout<<"Enter the 4 digit number"<<endl;
    cin>>num4>>num3>>num2>>num1;
    
            
    //Map inputs to outputs or process the data
    if(num1<48||num1>57){
    cout<<static_cast<char>(num1)<<" ?";  
    cout<<endl;
    }
    else{
    cout<<static_cast<char>(num1)<<" ";
    while(one<(num1-48)){
        cout<<"*";
        one++;
    }
    cout<<endl;
    }
    
    if(num2<48||num2>57){
    cout<<static_cast<char>(num2)<<" ?";  
    cout<<endl;
    }
    else{
    cout<<static_cast<char>(num2)<<" ";
    while(two<(num2-48)){
        cout<<"*";
        two++;
    }
    cout<<endl;
    }
    
    if(num3<48||num3>57){
    cout<<static_cast<char>(num3)<<" ?";  
    cout<<endl;
    }
    else{
    cout<<static_cast<char>(num3)<<" ";
    while(three<(num3-48)){
        cout<<"*";
        three++;
    }
    cout<<endl;
    }
    
    if(num4<48||num4>57){
    cout<<static_cast<char>(num4)<<" ?";  
    cout<<endl;
    }
    else{
    cout<<static_cast<char>(num4)<<" ";
    while(four<(num4-48)){
        cout<<"*";
        four++;
    }
    cout<<endl;
    }
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}