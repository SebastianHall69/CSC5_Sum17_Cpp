/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 5:22 PM
 * Purpose:  Calculates the occupancy rate of hotel
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //For setting point precision
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    short numFlr,//Number of floors
            totRoom,//Total rooms per floor
            occRoom,//Occupied rooms on each floor
            ocRmTot=0,//Occupied room total
            emRmTot=0,//Empty room total
            allRoom;//All the rooms in the hotel
    float perOcc;//The percent occupied
    
    //Input data
    cout<<"\tHotel Occupancy Calculator\n\n"; //Header
    cout<<"Enter the number of the highest floor"
          " in your hotel\n";//Prompt answer
    cin>>numFlr;//Get floor number for loop
    
    //Map inputs to outputs or process the data
    
    for(int count=1;count<=numFlr;count++){
        
        if(count==13)continue;//Ignoring the demonic thirteenth floor
        cout<<"Enter the total rooms on floor "<<count<<endl;
        cin>>totRoom;
        
        while(totRoom<0){
            cout<<"That is impossible. Enter a valid number\n";
            cin>>totRoom;}//Validating and reentering answers
        cout<<"How many of those are occupied?\n";
        cin>>occRoom;
        
        while(occRoom<0){
            cout<<"That is impossible. Enter a valid number\n";
            cin>>occRoom;}//Validating and reentering answers
        
        if(occRoom>totRoom)//Making sure they didn't mess up
            cout<<"The number of occupied rooms you entered is\n"
                    "higher than the total rooms on that floor. You\n"
                    "should probably just restart the program now\n\n\n\n";
        ocRmTot+=occRoom;//Running total of occupied rooms
        allRoom+=totRoom;//Running total of all rooms       
                   
        }
        emRmTot=allRoom-ocRmTot;//Calculating empty rooms
        
    
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"\n\nThe hotel has "<<allRoom<<" rooms\n\n";
    cout<<"Of those, "<<ocRmTot<<" of them are occupied\n\n";
    cout<<"Percentage occupied is "<<static_cast<float>(ocRmTot)/allRoom*100<<
        "%\n\n\n";
    cout<<"That is all";
    
    //A Sebastian Production
    return 0;
}