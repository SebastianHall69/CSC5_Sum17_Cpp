/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 10:03 PM
 * Purpose:  A random number game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //For srand
#include <ctime>     //For time
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int guess,answer,total=0;//Guess, answerm and total tries
    
    //Header
    cout<<"This program is a random number guessing game. You need\n"
            "to guess the number and will be told if you need to go\n"
            "higher, lower, or if you got it right. The random number\n"
            "you are guessing will be between 1 and 1000.\n"
            "Press enter to continue\n";
    cin.get();
    
    //Initialize variables
    answer=rand()%1000+1;//Range of 1-1000

    
    //Map inputs to outputs or process the data
    do{
        cout<<"Enter your guess of the random number\n";
        cin>>guess;
        
        if(guess<answer)
            cout<<"Too Low. Try Again\n";
        else if(guess>answer)
            cout<<"Too High. Try Again\n";
        total+=1;
    }
    while(guess!=answer);
    
    cout<<"Congratulations! You correctly guessed the answer was "<<answer;
    cout<<endl<<"It only took you "<<total<<" tries";
    
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}