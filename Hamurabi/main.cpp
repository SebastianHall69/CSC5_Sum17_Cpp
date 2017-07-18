/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 17, 2017, 11:37 PM
 * Purpose:  Final Project - Hammurabi Strategy Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //For Time Function
#include <cstdlib>   //For Rand and Srand
#include <fstream>   //For File Input/Output
#include <iomanip>   //Formatting
#include <cmath>     //For the math functions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void gtTitle();//Output title using file input/output
void seeRule();//Letting the player see the rules of the game
void dspYear(int &,float ,int ,float &,int &,int &,int ,int , int);//Display  
                                              //the status for the current year

//Execution begins here
int main() {
    //Display The Title
    gtTitle();
    cout<<endl;
    
    //Optional Rules To See
    seeRule();
    
    //Declare and initialize variables
    int year=1;//The first year
    float newPpl;//New people to be determined by random
    int strvd=0;//The number of people you failed to feed and killed
    float pop=100;//The city population. Starts at 100
    int acres=1000;//City starts with 1000 acres
    int totBush=2800;//Total bushels starting at 2800
    int crops=0;//Amount harvested each year
    int ratFood=0;//The amount the rats happened to eat that year
    int lndPrc=0;//The current going rate for land in bushels range [17,26]
    
    
    //Display the first years data
    dspYear(year,newPpl,strvd,pop,acres,totBush,crops,ratFood,lndPrc);
  
    
    
    
    
    
    

    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}


void gtTitle(){
    //Opening and writing to the Rules File
    ofstream title;     //Input file variable name
    string ttl;         //Variable used to read file info to
    
    title.open("title.dat");        //Opening file
    
    title<<"Hammurabi: A Game Of Strategy";//Reading title to file
    title.close();          //Closing file
    
    ifstream titleO;        //Input file variable
    titleO.open("title.dat");       //Opening input file
    
    while(titleO>>ttl){         //Displaying file name one string at a time
        cout<<ttl<<" ";
    }
    cout<<endl;
}

void seeRule(){
    char ans;               //The answer given (just to check off char)
    bool choice;            //Boolean value for the rules display choice
    
    cout<<"Press 0 And Enter To See The Game Rules.\nPress "//Rules input prompt
            "Anything Else To Continue And Play The Game\n";
    cin>>ans;        //inputting choice to see rules 
    choice=ans-48;   //Setting the char to the boolean
    
    if(choice==false){
        cout<<"You Are Hammurabi. Ruler Of This Land\n\n"
    "1.) The game will last 10 rounds each being one year\n"
    "2.) Each living person needs 20 bushels of grain per\n"//The Game Rules
    "    year and can work up to 10 acres of land annually\n"
    "3.) Each acre of land requires 1 bushel to farm on it\n"
    "4.) If you kill enough people in one year you will be\n"
    "    impeached and lose the game\n"
    "5.) Reach year 11 successfully to win the game\n\n";
        
        cout<<"Press Enter To Play\n";
        cin.ignore();       //Clear null terminator out of keyboard buffer
        cin.get();          //Enter to go to the next screen
    }
}

void dspYear(int &year,float newPpl,int strvd,float &pop,int &acres,int &totBush,int crops,int ratFood, int lndPrc){
    
    cout<<"Hammurabi: I beg to report to you,\n"
            "In year "<<year<<endl;
    cout<<strvd<<" People starved\n";
    cout<<newPpl<<" People came to the city\n";
    pop+=newPpl;
    cout<<"The city population is now "<<pop<<endl;
    cout<<"The city now owns "<<acres<<" acres\n";
    cout<<"You harvested "<<crops<<" bushels per acre\n";
    cout<<"Rats ate "<<ratFood<<" bushels\n";
    cout<<"You now have "<<totBush<<" in store\n";
    cout<<"Land is trading at "<<lndPrc<<" bushels per acre\n";
    
    year++;
    pop+=200;
    acres+=150;
    totBush-=500;
    
}