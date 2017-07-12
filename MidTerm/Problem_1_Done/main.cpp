/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 11, 2017, 12:47 AM
 * Purpose:  Problem #1. The difficult X problem
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(){
  
   
    
   int choice;      

   cout<<"Input a number between 1-50 to make a giant X"<<endl;
                                             //Getting starting number
   cin>>choice;
   cout<<"\n\n";
   
   while(choice<1||choice>50){              //Validation
       cout<<"Valid Number Choices Are 1-50. Enter A Valid Number\n";
       cin>>choice;
   }
   if(choice%2==1){             //Separating between even and odd X
   int k=1;                     //Many Many different variables used
   int f=1;                     //As incrementers and decrementers
   int n=1;
   k++;
   int middle=choice;
   int y=middle/2+1;
   int z=y;                     //Many Many different variables used
   int r=y;                     //As incrementers and decrementers
   int u=2;
   
   
   for(int m=choice/2;m>=1;m--) {
    cout<<"\t"<<setw(k)<<choice;
    cout<<setw(choice-f)<<n++<<endl;    //Top Half of Odd X
    k++;
    choice--;
    f++;
   }
   
   cout<<"\t  "<<setw(middle/2)<<middle/2+1;        //Center of Odd X
   
   
   for(int m=middle/2;m<middle-1;m++){      //Bottom of Odd X
       cout<<endl;
       cout<<"\t"<<setw(r)<<y+1;
       y++;
       r--;
       cout<<setw(u)<<--z;
       u+=2;
       
   }
   }
   
   else{
       int h=1;
       int b=choice;
       int d=choice;
       int l=choice/2;
       int c=-1;
       int s=choice/2+1;
       
       for(int k=1;k<=choice/2;k++){
           cout<<"\t"<<setw(h)<<k;                //Top of Even X
           h++;
           cout<<setw(b-1)<<d;
           b--;
           b--;             //Double Decremented to offset X pattern;
           d--;
           cout<<endl;
       }
       
       for(int t=choice/2;t>=1;t--){
           cout<<"\t"<<setw(l)<<t;
           l--;
                                        //Bottom of Even X
           cout<<setw(c+=2)<<s;
                  
           s++;        
           cout<<endl;
       }
   }    
//A Sebastian Production
return 0;
}