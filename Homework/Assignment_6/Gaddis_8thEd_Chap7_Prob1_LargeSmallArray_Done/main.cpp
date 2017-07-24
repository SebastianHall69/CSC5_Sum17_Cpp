/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 23, 2017, 7:05 PM
 * Purpose:  Have a user enter 10 numbers into an array and display
 *           the largest and smallest values
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void getLow(int [] ,const int);//Getting lowest value
void getHigh(int [], const int);//Something I don't do

//Execution begins here
int main() {
    //Declare and initialize variables
    const int SIZE=10;          //Array Size
    int array[SIZE];            //User entered array
    
    //Header
    cout<<"Enter 10 numbers less than 100,000 and greater than -100,000\n"
            "to have the highest and lowest determined\n\n";
    
    //For loop for getting array values
    for(int i=0;i<SIZE;i++){
        cout<<"Enter Number "<<i+1<<": ";
        cin>>array[i];
    }
    
    //Function calls for high and low that display outputs
    getLow(array, SIZE);
    getHigh(array,SIZE);
    
    
    //A Sebastian Production
    return 0;
}

void getHigh(int array[],const int SIZE) {
    int highest=array[0];
    for(int j=0;j<SIZE;j++){            //Determining highest
        if(array[j]>highest)
            highest=array[j];
    }
    cout<<endl<<"highest: "<<highest<<endl;     //Outputting highest
}




void getLow(int array[],int SIZE){
    int lowest=array[0];
    for(int j=0;j<SIZE;j++){            //Determining lowest
        if(array[j]<lowest)
            lowest=array[j];
    }
    cout<<endl<<"lowest: "<<lowest<<endl;   //Outputing lowest
}

