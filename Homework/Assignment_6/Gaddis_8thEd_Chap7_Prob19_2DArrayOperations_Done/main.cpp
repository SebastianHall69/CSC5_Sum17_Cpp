/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 23, 2017, 5:40 PM
 * Purpose:  Use test data to get total, average, row total, column total,
 *           highest in row, and lowest in a row
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //For time
#include <cstdlib>   //For random
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int COLS=5;

//Function Prototypes
void getTtl(int [][COLS] ,int);//Total
void avg(int [][COLS] ,int);//Average
void rowTtl(int [][COLS] ,int);//Total per row
void colTtl(int [][COLS] ,int);//Total per column
void highRow(int [][COLS] ,int);//Highest per row
void lowRow(int [][COLS] ,int);//Lowest per row

//Execution begins here
int main() {
    //Setting random seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare and initialize variables
    int rows=5;
    int array[rows][COLS];
    
    
    //Randomizing the Data
    for(int y=0;y<rows;y++){
        for(int x=0;x<COLS;x++){
            array[y][x]=rand()%10;
        }
    }
        
    //Header
    cout<<"This Program Displays Certain Values From A\n"
            "Randomly Chosen Data Set\n\n";
    
    //Outputting array
    for(int y=0;y<rows;y++){
        for(int x=0;x<COLS;x++){
            cout<<array[y][x]<<" ";
        }
        cout<<endl;
    }cout<<endl<<endl;
    
    
    
    
    
    
    //Calling functions and outputting data
    getTtl(array,rows);
    avg(array,rows);
    rowTtl(array,rows);
    colTtl(array,rows);
    highRow(array,rows);
    lowRow(array,rows);
    
    //A Sebastian Production
    return 0;
}

void lowRow(int array[][COLS] ,int rows){
    int lowest=array[0][0];
    for(int i=0;i<rows;i++){            //Getting lowest with loops
        for(int j=0;j<COLS;j++)
            if(array[i][j]<lowest)
                lowest=array[i][j];
    }
    cout<<"Lowest: "<<lowest;
}



void highRow(int array[][COLS] ,int rows){
    int highest=array[0][0];
    for(int i=0;i<rows;i++){            //Getting Highest with loops and if's
        for(int j=0;j<COLS;j++)
            if(array[i][j]>highest)
                highest=array[i][j];
    }
    cout<<"Highest: "<<highest<<endl;
}


void colTtl(int array[][COLS] ,int rows){
    for(int i=0;i<COLS;i++){
        int rowAcc=0;
        for(int j=0;j<rows;j++){    //Getting column total with loops and if's
            rowAcc+=array[j][i];
        }
        cout<<"Column "<<i+1<<": "<<rowAcc<<endl;
    } 
}

void rowTtl(int array[][COLS] ,int rows){
    for(int i=0;i<rows;i++){
        int rowAcc=0;                   //Getting row total with loops
        for(int j=0;j<COLS;j++){
            rowAcc+=array[i][j];
        }
        cout<<"Row "<<i+1<<": "<<rowAcc<<endl;
    } 
}



void avg(int ary [][COLS],int rows){
    float avg=0;
    int ttl=0;//Total                   //Getting average with loops
    for(int i=0;i<rows;i++){
        for(int j=0;j<COLS;j++){
            ttl+=ary[i][j];
        }
    }
    avg=static_cast<float>(ttl)/(COLS*rows);
    cout<<"Average: "<<avg<<endl;
}

void getTtl(int ary [][COLS],int rows){
    int ttl=0;//Total
    for(int i=0;i<rows;i++){            //Getting total with loops
        for(int j=0;j<COLS;j++){
            ttl+=ary[i][j];
        }
    }
    cout<<"Total: "<<ttl<<endl;  
}