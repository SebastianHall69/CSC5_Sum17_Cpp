/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 24, 2017, 12:50 AM
 * Purpose:  output an array, then output it 
 *           bubble sorted, then selection sorted
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
    const int SIZE=8;
    int array[SIZE]={ 1234,7645,3554,9756,9439,7634,6214,8433};
    int array2[SIZE];
    
    //Assign array2 the same values as array 
    for(int i=0;i<SIZE;i++)
        array2[i]=array[i];
    
    //Output the original array
    for(int i=0;i<SIZE;i++)
        cout<<array2[i]<<" ";
    
    
    
    
    
    
    //Map inputs to outputs or process the data
    //Bubble sort
    bool swap;
    short temp;
    
    do{
        swap=false;
        for(int i=0;i<SIZE-1;i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                swap=true;
            }    
        }
    } while(swap);
    //Selection sort
    int strt, minInd, minVal;
    for(strt=0;strt<(SIZE-1);strt++){
        minInd=strt;
        minVal=array2[strt];
        for(int index=strt+1;index<SIZE;index++){
            if(array2[index<minVal]){
                minVal=array2[index];
                minInd=index;
            }
        }
        array2[minInd]=array[strt];
        array2[strt]=minVal;
    }
    
    
    
    
    
    //Output the transformed data
    cout<<endl<<endl<<"Bubble Sort: ";
    for(int i=0;i<SIZE;i++)     //Bubble Sort
        cout<<array[i]<<" ";
    
    cout<<endl<<"Selection Sort: ";
    for(int j=0;j<SIZE;j++){
        cout<<array2[j]<<" ";
    }
    
    
    //A Sebastian Production
    return 0;
}