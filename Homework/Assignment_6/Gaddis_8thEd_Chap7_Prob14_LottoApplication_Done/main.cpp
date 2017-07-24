/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 23, 2017, 4:26 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //For time function
#include <cstdlib>   //For random functions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main() {
    //Setting random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const short TKTSIZE=5;//Ticket size
    short winner[TKTSIZE];//The winning random lottery ticket
    short ticket[TKTSIZE];//The users inputted ticket
    
    //Random ticket numbers
    for(short i=0;i<TKTSIZE;i++)
        winner[i]=rand()%10;
    
    //Beginning header
    cout<<"California Lottery: Will You Win Big?\n";
    
    //Input users ticket into array
    for(short i=0;i<TKTSIZE;i++){
        cout<<"Enter Number "<<i+1<<": ";
        cin>>ticket[i];
        cout<<endl;
    }
    
    //Match tickets
    short ttlMtch=0;//Total number of matching tickets
    
    
    for(int index=0;index<TKTSIZE;index++){//Loop to compare each array value
        if(ticket[index]==winner[index])
            ttlMtch++;      //Increases if tickets match in a place
    }
    
    //Output the transformed data
    cout<<endl<<"Winning Ticket: ";
    for(int i=0;i<TKTSIZE;i++)          //Winning ticket
        cout<<winner[i];
    cout<<endl<<"Your Ticket:    ";
    for(int i=0;i<TKTSIZE;i++)          //Users ticket
        cout<<ticket[i];
    cout<<endl;
    
    
    if(ttlMtch==5)          //Determining grand prize status
        cout<<"GRAND PRIZE WINNER!!!!!\n";
    cout<<"Total Matching Numbers: "<<ttlMtch;
    
    //A Sebastian Production
    return 0;
}