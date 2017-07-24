/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 23, 2017, 4:26 PM
 * Purpose:  Input monkey data for 3 monkeys and 5 days and
 *           output average eaten, least, and most by one monkey
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare and initialize variables
    short mnk=3;//Number of monkeys
    short days=5;//Number of days
    int mnkFood[mnk][days];//Arrays of food eaten per day by monkey
    
    //Header
    cout<<"\t\tZoo Database\nYou Will Enter The amount of food eaten by each\n"
            "monkey each day in lbs"<<endl<<endl;
   
    //Input data
    for(int i=0;i<mnk;i++){
        for(int j=0;j<days;j++){
            cout<<"Monkey "<<i+1<<" Day "<<j+1<<" Food: ";
            cin>>mnkFood[i][j];
            if(mnkFood[i][j]<0){
                cout<<"\nYou cannot make monkeys regurgitate "
                        "food. Enter again\n";
                cin>>mnkFood[i][j];
            }
            cout<<endl;
        }
    }
    //Process Data
    //Get average of all monkeys
    int ttl=0;
    float avg=0;
    for(int i=0;i<mnk;i++){
        for(int j=0;j<days;j++){
            ttl+=mnkFood[i][j];//Accumulating the total lbs of monkey food
        }
    }
    avg=static_cast<float>(ttl)/(mnk*days);//Average eaten by all monkeys
    //Output average eaten
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Average for all monkeys each day: "<<avg<<" Lbs\n";

    //Least amount for any monkey
    int lowest=mnkFood[0][0];
    for(int i=0;i<mnk;i++){
        for(int j=0;j<days;j++){
            if(mnkFood[i][j]<lowest)
                lowest=mnkFood[i][j];
        }
    }
    cout<<"Smallest amount eaten by any monkey: "<<lowest<<" Lbs"<<endl;
    
    //Most amount for any monkey
    int highest=mnkFood[0][0];
    for(int i=0;i<mnk;i++){
        for(int j=0;j<days;j++){
            if(mnkFood[i][j]>highest)
                highest=mnkFood[i][j];
        }
    }
    cout<<"Most amount eaten by any monkey: "<<highest<<endl<<" Lbs";
    //Output the transformed data
    
    //A Sebastian Production
    return 0;
}