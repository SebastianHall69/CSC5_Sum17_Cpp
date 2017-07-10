/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 10:24 PM
 * Purpose:  get paid a penny. doubles each day
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //For power function
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float wage;//continual wages after that
    float ttlPay=0;//Total pay
    int n;//Number of days
    
    //Header
    cout<<"Assume you got paid 1 penny per day for your work\n"
            "but that doubled each day afterwards. Let's see\n"
            "how much you would get. Don't work for too long or\n"
            "you may get skewed results\n\n";
    //Getting days
    cout<<"\nInput the number of days that you will work\n";
    cin>>n;
    
    while(n<=0){
        cout<<"You must work at least one day. Enter days worked again.\n";
        cin>>n;
    }

    
    //Map inputs to outputs or process the data
    wage=pow(2,(n-1))/100;//Calulating the final days pay
    
    
    for(int count=n;count>0;count--){
        ttlPay+=pow(2,count-1)/100;
    }
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"\n\nThe Payment on the final day is $"<<wage<<endl;
    cout<<"\nThe overall payment for "<<n<<" days is $"<<ttlPay<<endl;
    cout<<"\nYour average pay per day is $"<<ttlPay/static_cast<float>(n)<<endl;
    
    //A Sebastian Production
    return 0;
}