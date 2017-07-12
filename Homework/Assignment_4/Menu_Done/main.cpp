/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 9, 2017, 11:16 PM
 * Purpose:  A menu for the nine other problems
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //
#include <cmath>     //
#include <ctime>     //Just covering the libraries I utilized
#include <iomanip>   //
#include <fstream>   //
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

    
    short choice;//Menu Choice
    
    
    do{
        cout<<"\t\tMenu\n\n";         //Menu
        cout<<  "1.) Ocean Level Rise Calculator\n"
                "2.) Calories Burned Per Min On Treadmill\n"
                "3.) Country Club Membership Rate Increase\n"
                "4.) Distance Traveled For Speed And Time\n"
                "5.) Penny Wages Doubled Each Day\n"
                "6.) Hotel Occupancy Calculator\n"
                "7.) Average Rainfall Per Month Over Years\n"
                "8.) Budget Analysis\n"
                "9.) The Random Number Game\n"
                "10.) Quit Like A Filthy Quitter\n";
        cout<<"Enter your Choice\n";
        cin>>choice;                    //Input Choice
        while(choice<0||choice>10){//Validate menu choice
            cout<<"That Menu Selection Is Invalid. Please Select Another\n";
            cin>>choice;
        }
        
        switch(choice){
                case 1:{
                    
    //Declare and initialize variables
    float ocnRise=1.5;//Rising 1.5 mm per year
    
    
    //Header
    cout<<"Total ocean rise over the next 25 years\n\n\n";
    
    
    //Map inputs to outputs or process the data
    for(int count=1;count<=25;count++){
        cout<<"Year: "<<count;
        cout<<setw(10)<<"Rise: "<<ocnRise*count<<"mm\n";
    }
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();
;break;
                }
                case 2:{
                    //Declare and initialize variables
    float calPMin=3.6;//Calories per minute
    short minutes=30;

    //Header
    cout<<"This program displays the amount of calories burned\n"
            "at 5 minute intervals for half an hour\n"
            "Press enter to continue\n";
    cin.get();//Enter to continue
    cout<<endl<<endl;//Giving some aesthetic space
    
    
    //Output the table
    cout<<"Minutes"<<"\t\tCalories Burned\n\n";
    
    for(int count=5;count<=30;count+=5){
    
    cout<<count<<" Min           "<<calPMin*count<<" Calories"<<endl;
    }
    
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();
    break;
                
                }
            case 3:{
                //Declare and initialize variables
    float basePrc=2500;//Initial price before increase
    float newPrc;//The new price after being inflated
    float rate=0.04;//The percentage raised    

    //Map inputs to outputs or process the data
    cout<<setprecision(2)<<fixed<<showpoint;//Formatting precision output
    cout<<"Membership Pricing For The Next Six Years\n\n";
    for(int count=1;count<7;count++){//Loop to repeat results
        basePrc+=basePrc*rate;       
        cout<<"The price for year "<<count<<" is $"<<basePrc<<endl;
    } 
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();
                break;
            }
            case 4:{
                //Declare variables
    float speed,time;//Speed and time
    
    //Header
    cout<<"You will be entering the speed of a vehicle and\nhow many"
            " hours it has traveled.\nPress enter to begin\n";
    cin.ignore();
    cin.get();
    
    
    //Input data
    //Get speed
    cout<<endl<<"Enter the velocity in MPH of the vehicle\n";
    cin>>speed;
    while(speed<=0){//Validate
        cout<<endl<<"You need a speed greater than 0. Enter speed again\n";
        cin>>speed;
    }//Get time
    cout<<endl<<"Enter the time in hours the vehicle has traveled\n";
    cin>>time;
    while(time<=0){//Validate
        cout<<endl<<"A time of 0 or less is invalid. Enter a valid time\n";
        cin>>time;
    }

    
    //Map inputs to outputs or process the data
    for(int count=1;count<=time;count+=1){
        cout<<"Hour:\t\tDistance Travelled\n";
        cout<<count<<"\t\t"<<count*speed<<" miles"<<endl<<endl;
    } 
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();
                break;
            }
            case 5:{
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
    
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();            
                break;
            }
            case 6:{
                    //Declare variables
    short numFlr,//Number of floors
            totRoom,//Total rooms per floor
            occRoom,//Occupied rooms on each floor
            ocRmTot=0,//Occupied room total
            emRmTot=0,//Empty room total
            allRoom=0;//All the rooms in the hotel
    float perOcc;//The percent occupied
    
    //Input data
    cout<<"\tHotel Occupancy Calculator\n\n"; //Header
    cout<<"Enter the number of the highest floor"
          " in your hotel\n";//Prompt answer
    cin.ignore();
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
    cout<<"Press Enter to Return to The Menu\n";
    cin.ignore();
    cin.get();
                break;
            }
            case 7:{
                    //Declare variables
    short years,//The number of years
          totMon;//Total number of months
            
    float totRain=0,//Total rainfall
          monAver,//Monthly Average
          rainPM;//Rain per month
    
    //Header
    cout<<"Calculating the average rainfall. Use inches\n"
            "How many years are you looking to find the average\nfor?\n";
    //Input data
    cin>>years;
    
    while(years<0){
        cout<<"The years cannot be less than 0. Enter the years again\n";
        cin>>years;             //Input validation
    }
    cout<<endl;
    //Map inputs
    for(int count=1;count<=years;count++){      //Year loops
        
        for(short mIN=1;mIN<=12;mIN++){//mIN is months in the year
            cout<<"Enter the rainfall for month "<<mIN<<" of year "//Month loop
                    <<count<<endl;
            
            cin>>rainPM;
            
            while(rainPM<0){
                cout<<"The rain per month cannot be less than 0.\n Enter the"
                      " monthly rain again";
                cin>>rainPM;        //Input validation
            }
            totRain+=rainPM;//Total rain
        }
    }
    //Process data
    totMon=years*12;//Total months
    monAver=totRain/totMon;   //Average per month
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;//Setting output
    cout<<"The rainfall average was calculated for "<<totMon<<" months\n";
    cout<<"During this time, rainfall totalled "<<totRain<<" Inches\n";
    cout<<"That equates to an average of "<<monAver<<" inches per month\n";
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();
                break;
            }
            case 8:{
                    //Declare variables
    float budget,//Total monthly budget
          expense=0,//Each expense
          totExpn,//The total of all expenses
          ovrUndr;//Over or under the budget
    short amount;//The amount of daily expenses
    
    //Header
    cout<<"This is a monthly budget calculator. First enter your budget\n"
            "and press enter and then you will be prompted to input your\n"
            "monthly expenses after that\n\n\n";

                          
    //Input and process data
        cout<<"Enter the amount of monthly expenses you wish to add\n";
    cin>>amount;            //getting expense number
    while(amount<0){
        cout<<"You can't have less than 0 expenses. Enter again\n";
        cin>>amount;            //Input validation
    }
    
    cout<<"Input your total monthly budget\n$";
    cin>>budget;                    //Getting budget amount
    
    if(budget<0)                //Answer validation
        cout<<"Wow you must be really poor. Let us continue anyway\n";
    
    for(int count=1;count<=amount;count++){ 
        cout<<"Enter expense #"<<count<<"\n$";
        cin>>expense;    
        totExpn+=expense;
    }
    ovrUndr=budget-totExpn;
    
    //Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl<<endl<<"Your total monthly expenses is $"<<totExpn<<endl;
    
    if(totExpn<budget)
        cout<<"You managed to stay $"<<ovrUndr<<" under budget\n";
    else if(totExpn>budget)
        cout<<"You overspent by $"<<abs(ovrUndr)<<endl;
    else
        cout<<"You spent exactly the amount you had set aside for your budget\n";
        cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();       
    break;
            }
            case 9:{
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
    cout<<endl<<"It only took you "<<total<<" tries\n";
    cout<<"Press Enter to Return to The Menu\n";
                    cin.ignore();
                    cin.get();
                break;
            }
        
        
        }
    }
    while(choice!=10);//Quit if quit is chosen
    cout<<"Quitter!";
    
    //A Sebastian Production
    return 0;
}