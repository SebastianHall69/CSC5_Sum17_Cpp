/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 23, 2017, 4:26 PM
 * Purpose:  Have the user enter the size of an array and a number to
 *           determine which numbers are higher than n
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void highN();

//Execution begins here
int main() {
    //Declare variables
    int n;
    int size;
    
    //Input for n and size initialization
    cout<<"Enter a number between -100,000 and 100,000\n";
    cin>>n;
    cout<<"\nNow enter the amount of numbers you\n"
            " wish to compare to "<<n<<endl;
    cin>>size;
    
    //Declare array
    int array[size];
    
    //Fill Array
    for(int i=0;i<size;i++){
        cout<<"Enter Number "<<i+1<<": \n";
        cin>>array[i];
    }
    
    
    
    
    //Loop to go through array
    cout<<"Numbers larger than "<<n<<": "<<endl;
    for(int i=0;i<size;i++){
        if(array[i]>n)
            cout<<array[i]<<" ";
    }
    
    
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}