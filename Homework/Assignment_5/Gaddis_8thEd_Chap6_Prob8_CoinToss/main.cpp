/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:32 AM
 * Purpose:  Use a function to simulate a random coin toss
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //For Time For Random
#include <cstdlib>   //For srand 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants


//Function Prototypes
bool cnTss();

//Execution begins here
int main() {
    //Setting random seed
        srand(static_cast<unsigned int>(time(0)));
    
    
    //Declare variables
    unsigned int choice;//Number of coin flips
    bool coin;              //to get heads or tails value
    int headTtl=0;      //Heads accumulator
    int tailTtl=0;      //Tails accumulator
    
    //Input data
    cout<<"How Many Times Would You Like To Randomly Flip A Coin?\n"
            "Use Larger Numbers For Better Answers\n";
    cin>>choice;                //Getting loop iterations
    while(choice<0){
        cout<<"No Negative Values Allowed\nEnter Again: ";
        cin>>choice;        //Some validation
    }

    //Map inputs to outputs or process the data
    
    for(choice;choice>0;choice--){
        coin=cnTss();                   //looping choice number of times
        if(coin){
            headTtl++;
        }
        else(tailTtl++);
    }
    
    //Output the transformed data
    cout<<endl<<endl<<endl<<"Heads Throws:  "<<headTtl<<endl;
    cout<<"Tails Throws:  "<<tailTtl<<endl;
                            //Outputting the data
    
    
    //A Sebastian Production
    return 0;
}


bool cnTss(){
    bool coin;              //coin toss function for tossing random coin
    if(rand()%2==0)
        coin=true;
   
    else coin=false;
    
    return coin;            //Returning true or false as coin value
    
}
