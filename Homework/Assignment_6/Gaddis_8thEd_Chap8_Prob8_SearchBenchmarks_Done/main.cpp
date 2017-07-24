/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 20th, 2017, 10:42 AM
 * Purpose:  show the efficiency of each sort
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    srand(static_cast<unsigned>(time(0)));//Random seed for filling arrays
    
    const int SIZE=50;
    int array[SIZE];//First array for bubble swap
    int array2[SIZE];//Second array for selection swap
    
    //Initialize with randoms
    for(int i=0;i<SIZE;i++)
        array[i]=rand()%100;
    
    //For loop to initialize array 2
    for(int i=0;i<SIZE;i++){
        array2[i]=array[i];
    }
    
    
    //Map inputs to outputs or process the data
        //Bubble swap
    bool swap=false;
    int temp;       //Temporary variable to switch values
    int swaps=0;//Number of bubble swaps
    
    do{
        swap=false;
        for(int i=0;i<SIZE-1;i++){      //Doing the bubble swap
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];        //Switching values
                array[i+1]=temp;
                swap=true;          //Bool for loop continuation
                swaps++;        //Counter for bubble swaps
                }
            }
        }while(swap);//If swap is false then loop ends
        
        
    //Selection swap
        int strt, minInd, minVal,count=0;//Initialize variables for the sort
        for(strt=0;strt<(SIZE-1);strt++){//Counter for each iteration of sort
            minInd=strt;
            minVal=array2[strt];//Initializing index values
            for(int index=strt+1;index<SIZE;index++){
                if(array2[index]<minVal){
                    minVal=array2[index];//Swapping values
                    minInd=index;
                    count++;        //Counting swaps
                }
            }
            array2[minInd]=array2[strt];
            array2[strt]=minVal;
        }    
    
    
    //Output the transformed data
        cout<<"The Array:\n";       //Header
        for(int i=0;i<SIZE;i++){    
            cout<<array[i]<<" ";        //Outputting array with for loop
            if(i%10==9)             //Making new lines after 10 values
                cout<<endl;
        }
        cout<<"\nEfficiency of each swap at 50 elements";
        cout<<"\nBubble Sorts Swaps: "<<swaps<<endl;//Outputting bubble swaps
        cout<<"Selection Sort Swaps: "<<count<<endl;//Outputting selections swaps
        
    //A Sebastian Hall
    return 0;
}

