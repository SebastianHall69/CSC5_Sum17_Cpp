/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Problem #4. Internet service Provider Prob.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
bool isPrime(int);              //Function to see if prime or not

//Execution begins here
int main() {
    //Declare variables
    int num;//number choice
    bool prime;//variable to say if choice is prime or not 
    
    //Initialize variables
    
    //Input data
    cout<<"Input A Number To See If It Is Prime Or Composite\n";
    cin>>num;               //Getting the number input
    while(num<1){
        cout<<"Enter A Positive Or Nonzero Number\n";
        cin>>num;                   //Input Validation
    }
    
    //Map inputs to outputs or process the data
    prime=isPrime(num);         //Calling functions
    if(num==1||num==2)          //Adjusting for 1 and 2 being prime
        prime=true;
    
    //Output the transformed data
    if(prime)                   
        cout<<endl<<num<<" Is Prime";
    else
        cout<<endl<<num<<" Is Composite";
    
    
    //A Sebastian Production
    return 0;
}

bool isPrime(int num){
    bool status;
    
    for(int count=num-1;count>1;count--){
        
        if(num%count==0){                   //Composite
            status=false;
            return status;
            break;
        }
        else
            status=true;
                                            //Prime
    }
        return status;   
}