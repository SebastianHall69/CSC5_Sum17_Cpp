/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 17, 2017, 1:03 AM
 * Purpose:  Display the status of copper wire orders
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void infoFnc(int &,int &,bool &,float &);//Getting inputs
void display(int,int,bool,float);//Processing and outputting outputs

//Execution begins here
int main() {
    //Declare variables
    int sOrder=0,//Spools ordered
        sStock;//Number of spools in stock
    bool special=0;//Did they get the special shipping rate?
    float spclCrg=0;//Charge for the special shipping
    
    //Initialize variables
    infoFnc(sOrder,sStock,special,spclCrg);//Info function function call
    
    //Map inputs to outputs and output data
    
    display(sOrder,sStock,special,spclCrg);//Displaying results
    
    
    //A Sebastian Production
    return 0;
}


void infoFnc(int &sOrder,int &sStock,bool &special,float &spclCrg){
    char answer;//Answer for bool    
    sStock=200;
    cout<<"MiddleTown Wholesale Wire Company\n\nHow many spools of copper"
            " wire did you order?\n";           //Header
    cin>>sOrder;
    while(sOrder<1){
        cout<<"\nIf you didn't order any then why are you here?\nEnter"
                " again if you just messed up\n";       //Spools ordered
        cin>>sOrder;
    }
    cout<<"\nDid you pay for the special extra shipping?\ny or n to answer\n";
    cin>>answer;
    while(answer!='y'&&answer!='Y'&&answer!='n'&&answer!='N'){
        cout<<"\nResponse invalid. Enter another\n";
        cin>>answer;                                //Special shipping
    }
    if(answer=='y'||answer=='Y'){
        special=true;                       //yes or no on special shipping
        cout<<"\nHow much extra per spool is the special shipping?\n";
        cin>>spclCrg;
        while(spclCrg<=0){
            cout<<"\nYou must enter a positive value\n";
            cin>>spclCrg;
        }
    }
    else
        special=false;
}


void display(int sOrder, int sStock,bool special,float spclCrg){
    cout<<setprecision(2)<<fixed<<showpoint;
    float ttlShip;
    float sub=0;
    if(sOrder>sStock){                          //Output if understocked
        sub=sStock*100;
        cout<<"\n\nSpools ready to ship:          "<<sStock<<endl;
        cout<<"Backordered spools:            "<<sOrder-sStock<<endl;
        cout<<"Subtotal of ready to ship     $"<<sub<<endl;  
        ttlShip=10*sStock;
        if(special)
        ttlShip+=spclCrg*sStock;
    }
    
    else
        {
        sub=sOrder*100;
        cout<<"\n\nSpools ready to ship:          "<<sOrder<<endl;
        cout<<"Subtotal of ready to ship     $"<<sub<<endl;  
        ttlShip=10*sOrder;
        if(special)                             //Output if adequate spools
        ttlShip+=spclCrg*sOrder;
    }
    cout<<"Total shipping costs          $"<<ttlShip<<endl;//Remaining charges
    cout<<"Total Cost                    $"<<sub+ttlShip; 
}