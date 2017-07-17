/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2017, 2:24 AM
 * Purpose:  Menu for assignment 5
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Format Library
#include <cstdlib>   //For rand and srand
#include <ctime>     //For time
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float const GRAV=9.8;//Gravity in meters per second

//Function Prototypes
short menu();                       //For the menu obviously
float getVl();                       //Get Item Wholesale Value
float getMk();                      //Get the markup percentage
void calcRet(float, float);         //Calculate retail price
float fllDist(float, float);
float kEnergy(float, float);        //Kinetic Energy
float celsius1(float);          //Function for converting and building table
bool cnTss();                   //For each side of coin
void infoFnc(int &,int &,bool &,float &);//Getting inputs
void display(int,int,bool,float);//Processing and outputting outputs
float aDRate(float);//Death rate
float aBRate(float);//Birth rate
float tSqFt();//Total square feet
void dspInfo(float, float, float, float, float);//Display the info
float numGal(float);//Number of gallons
float numHour(float);//Number of hours
float clcPrf(float, float, float, float, float);//Calculating sales profit
bool isPrime(int);              //Function to see if prime or not

//Execution begins here
int main() {
    //Declare variables
    short choice;
    
    do{
    cout<<"Enter 1-11 to make your selection and press enter\n";
    
    choice=menu();
    
    
    
    switch(choice){
        case 1:{
                //Declare variables
    float wValue;//Wholesale value
    float perc;//Percent markup

    //Input data
    wValue=getVl();//Getting wholesale value
    
    perc=getMk();   //Getting the percent marked up
            
    //Map inputs to outputs or process the data  
    calcRet(wValue, perc);      //Calculating the retail price
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 2:{
                //Declare variables
    float time;//Time variable in seconds
    float dstnc;//Distance fallen
    
    //Input data
    cout<<"This Program Will Calculate The Distance An Object Has Fallen\n";
    cout<<"To Calculate The Falling Distance Enter The\n"
            "Time In Seconds The Object Has Been Falling\n";
    cin>>time;

    //Map inputs to outputs or process the data

    
    dstnc=fllDist(time,GRAV);
  
    
    //Output the transformed data
    
   cout<<endl<<"The Distance Fallen = "<<dstnc<<" Meters";
    
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 3:{
                //Declare variables
    float klGrams;//Mass in kilograms
    float velocity;//Velocity
    float kin; 
    
    //Input data                   //Getting Velocity
    cout<<"To Calculate The Kinetic Energy, Enter The Velocity\n"
            "In Meters Per Second\n";
    cin>>velocity;
                                //Getting Kilograms
    cout<<endl<<"Now Enter The Mass In Kilograms\n";
    cin>>klGrams;

    //Map inputs to outputs or process the data
    kin=kEnergy(klGrams,velocity);
                                    //Assigning return value to kin
  
    
    //Output the transformed data
    
    cout<<endl<<"Kinetic Energy Of: "<<kin; //outputting the kinetic energy
    
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 4:{
                //Declare variables
    float celsius,f=0;//Celsius and Fahrenheit
    
    //Input data
    cout<<"Fahrenheit To Celsius Table\n\n";//Header
    
    //Map inputs to outputs or process the data
    cout<<"Fahrenheit\tCelsius\n\n";//Table Header
    
    celsius=celsius1(f);        //Function call
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 5:{
            //Setting random seed
        srand(static_cast<unsigned int>(time(0)));
    
    
    //Declare variables
    unsigned int choice;//Number of coin flips
    bool coin;              //to get heads or tails value
    int headTtl=0;      //Heads accumulator
    int tailTtl=0;      //Tails accumulator
    
    //Input data
    cout<<"How Many Times Would You Like To Randomly Flip A Coin?\n"
            "Use Larger Numbers For Better Answers\n";
    cin>>choice;                //Getting loop iterations
    while(choice<0){
        cout<<"No Negative Values Allowed\nEnter Again: ";
        cin>>choice;        //Some validation
    }

    //Map inputs to outputs or process the data
    
    for(choice;choice>0;choice--){
        coin=cnTss();                   //looping choice number of times
        if(coin){
            headTtl++;
        }
        else(tailTtl++);
    }
    
    //Output the transformed data
    cout<<endl<<endl<<endl<<"Heads Throws:  "<<headTtl<<endl;
    cout<<"Tails Throws:  "<<tailTtl<<endl;
                            //Outputting the data
    
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 6:{
            //Declare variables
    int sOrder=0,//Spools ordered
        sStock;//Number of spools in stock
    bool special=0;//Did they get the special shipping rate?
    float spclCrg=0;//Charge for the special shipping
    
    //Initialize variables
    infoFnc(sOrder,sStock,special,spclCrg);//Info function function call
    
    //Map inputs to outputs and output data
    
    display(sOrder,sStock,special,spclCrg);//Displaying results
    
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 7:{
            //Declare variables
    int iPop,//Initial population of that year
        aBR,//Annual birth Rate
        aDR,//Annual death rate
        nYears;//Number of years to display
    
    //Input data
    cout<<"Population Data Grapher\n\nEnter the initial population amount\n";
    cin>>iPop;                                  //Getting initial population
    while(iPop<100){
        cout<<"\nPopulation must start higher than 100. Enter again\n";
        cin>>iPop;                //Getting and validating initial population
    }
    cout<<"\nEnter the number of years you wish to run the simulation for\n";
    cin>>nYears;
    while(nYears<1){                        //Getting and validating years
        cout<<"\nThe program must run for at least 1 year\n";
        cin>>nYears;
    }
    
    
    //Map inputs to outputs or process the data
    aDR=aDRate(iPop);//Function call for death rate
    aBR=aBRate(iPop);//Function call for birth rate
    
    //Output the transformed data
    cout<<"\tPopulation\tDied\tBorn\n";             //output table with loop
    for(int count=1;count<=nYears;count++){
        cout<<"Year: "<<count<<"     "<<iPop-aDR+aBR<<   "\t "
                <<aDR<<"\t "<<aBR<<endl;
        iPop+=aBR-aDR;
    }
    cout<<"\n\nNote: Death's and Birth's are for each year, not the total";
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 8:{
            //Declare variables
    float   nGal,//Number of gallons required
            hLabor,//Hours of required labor
            pCost,//Cost of paint
            pGal,//Cost per gallon
            lCost,//Labor costs
            tCost,//Total cost
            totSqFt;//Total square feet
    
    //Input data
    cout<<"Paint Job Price Estimator\n\n";
    
    //Map inputs to outputs or process the data
    totSqFt=tSqFt();//Total square feet function call
    nGal=numGal(totSqFt);//Number of gallons through function call
    hLabor=numHour(totSqFt);//Hours of labor through function call
    cout<<"Enter the price per gallon of paint\n";
    cin>>pGal;//Getting the price per gallon of paint
    while(pGal<10){//Validation
        cout<<"\nPaint costs a minimum of $10.00 per gallon. Enter Again\n";
        cin>>pGal;
    }
    pCost=pGal*nGal;//Getting total paint price
    lCost=hLabor*25;//Getting total labor cost
    tCost=lCost+pCost;//Total cost of all
    
    //Output the transformed data
    dspInfo(nGal,hLabor,pCost,lCost,tCost);
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 9:{
            //Declare variables
    float sP,//Sale Price Per Share
            nS,//Number of shares
            sC,//Sales commission paid
            pC,//Purchase commission paid
            pP,//Purchase price per share
            profit;//The profit or loss
    
    //Input data
    cout<<"To calculate the profit (or loss) of your stock sales\n"
            "Enter the data when prompted\n"
            "Enter the sale price per share\n";
    cin>>sP;
    while(sP<=0){
        cout<<"\nEnter a Valid Number\n";
         cin>>sP;                        //Entering each data and
    }                                           //Validating the input
    cout<<"\nEnter the number of shares\n";
    cin>>nS;
    while(nS<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>nS;
    }
    cout<<"\nEnter the sales commission paid\n";
    cin>>sC;
    while(sC<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>sC;
    }
    cout<<"\nEnter the purchase commission paid\n";
    cin>>pC;
    while(pC<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>pC;
    }
    cout<<"\nEnter the purchase price per share\n";
    cin>>pP;
    while(pP<=0){
        cout<<"\nEnter a Valid Number\n";
        cin>>pP;
    }
    
    //Map inputs to outputs or process the data
    profit=clcPrf(nS,sP,sC,pC,pP);
    
    //Output the transformed data
    if(profit>0){
    cout<<setprecision(2)<<fixed<<showpoint;    //outputting profits
    cout<<"\n\nYour Profit Is $"<<profit;
    }
    else if(profit==0)
            cout<<"//You have broken even";     //outputting even
    else {
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"\n\nYour Losses Are $"<<profit;      //outputting losses
    }
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        case 10:{
            //Declare variables
    int num;//number choice
    bool prime;//variable to say if choice is prime or not 
    
    //Initialize variables
    
    //Input data
    cout<<"Input A Number To See If It Is Prime Or Composite\n";
    cin>>num;               //Getting the number input
    while(num<1){
        cout<<"Enter A Positive Or Nonzero Number\n";
        cin>>num;                   //Input Validation
    }
    
    //Map inputs to outputs or process the data
    prime=isPrime(num);         //Calling functions
    if(num==1||num==2)          //Adjusting for 1 and 2 being prime
        prime=true;
    
    //Output the transformed data
    if(prime)                   
        cout<<endl<<num<<" Is Prime";
    else
        cout<<endl<<num<<" Is Composite";
    
    cout<<endl<<"Press Enter To Continue\n";
    cin.ignore();
    cin.get();
    //A Sebastian Production
        }break;
        
        
    }
    
    }
    while(choice!=11);
    cout<<"\nYou Have Quit The Program\n";
        
    //A Sebastian Production
    return 0;
}

short menu(){
    short choice1;
    cout<<  "1.)   Price Markup\n"
            "2.)   Falling Distance\n"
            "3.)   Kinetic Energy\n"
            "4.)   Celsius Temp Conversion Table\n"
            "5.)   Random Coin Toss\n"
            "6.)   Order Status Checker\n"
            "7.)   Population Chart\n"
            "8.)   Paint Job Estimate\n"
            "9.)   Stock Profit Calculator\n"
            "10.)  Prime Number Tester\n"
            "11.)  Quit Like A Filthy Quitter\n";
    cin>>choice1;
    while(choice1<1||choice1>11){
        cout<<"\nThat Is Not A Valid Menu Choice. Try Again\n";
        cin>>choice1;
    }
    
    return choice1;
}


float getVl(){ 
    float wValue;
    cout<<"To Calculate The Retail Value Of The Item First\nEnter The "
            "Products Wholesale Value. Do Not Use The Peso Or Rupee\n";
    cin>>wValue;
    while(wValue<=0){
        cout<<"We Don't Sell Items That Are Less Than Worthless, Try Again\n";
        cin>>wValue;
    }
    
    return wValue;
}

float getMk(){
    float perc;
    cout<<"\nNow Enter The Items Percentage Markup\n";
    cin>>perc;
    
    while(perc<0.001){
        cout<<"That Percentage would lose us money. Enter Another\nMore "
                "Profitable Percentage\n";
        cin>>perc;
    }
    
    return perc/100;
}

void calcRet(float wValue, float perc){
    float retail=0;//Final retail price
    retail=wValue+wValue*perc;        //Calculating and outputting price
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Retail Price:    $"<<retail;
}

float fllDist(float time,float grav){
    int dist=0.5*GRAV*time*time;
    return dist;
}

float kEnergy(float klGrams,float velocity){
    float kin=0.5*(klGrams*velocity*velocity);      //Calculating kinetic energy
    return kin;             //Returning kin value
}

float celsius1(float f){
    float c=0;
    for(int count=0;count<21;count++){//Loop for table
        c=0.5555555*(f-32);             //Converting
        cout<<f<<"\t\t"<<c<<endl;   //Outputting
        f++;    //Increasing F by one each iteration
    }   
}

bool cnTss(){
    bool coin;              //coin toss function for tossing random coin
    if(rand()%2==0)
        coin=true;
   
    else coin=false;
    
    return coin;            //Returning true or false as coin value
    
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

float aDRate(float iPop){
    float perc,aDR;//Percentage and annual death rate
    cout<<"\nEnter The Annual Death Rate Of The Population (percentage)\n";
    cin>>perc;
    while(perc>100||perc<0){
        cout<<"\nIf only killing "<<perc<<"% of people was possible...\n"
                "Sadly it isn't . Enter a new value\n";
        cin>>perc;//Validating answer
    }
    aDR=perc*iPop/100;//died each year
    
    return aDR;
}


float aBRate(float iPop){
    float perc,aBR;//Percentage and annual birth rate
    cout<<"\nEnter The Annual Birth Rate Of The Population (percentage)\n";
    cin>>perc;
    while(perc>100||perc<0){//Validating answer
        cout<<"\nLast time I checked we are not South Asia\n"
                "Enter a new value\n";
        cin>>perc;
    }
    aBR=perc*iPop/100;//birthed each year
    
    return aBR;
}

float tSqFt(){
    short rooms;//Number of rooms
    float total=0;//Total wall space
    float space;//Space on each wall
    cout<<"How many rooms will be painted?\n";
    cin>>rooms;
    while(rooms<1){
        cout<<"\nYou must have at least 1 room to paint. Enter again\n";
        cin>>rooms;
    }
    cout<<endl;
    for(short count=1;count<=rooms;count++){
        cout<<"What is the square footage in wall space in room "<<count<<endl;
    cin>>space;
    while(space<=0){
        cout<<endl<<"Spaces less than or equal to zero \n"
                "are not allowed. Enter again\n";
        cin>>space;
    }
    total+=space;
    cout<<endl;
    }
    return total;
}

float numGal(float totSqFt){
    float numGal=totSqFt/110;
    return numGal;
    
}

float numHour(float totSqFt){
    float hours;
    hours=totSqFt/110*8;
    
    return hours;
}

void dspInfo(float nGal,float hLabor,float pCost,float lCost,float tCost){
        cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"\nGallons Of Paint Required: "<<setw(3)<<nGal<<endl;
    cout<<"Hours Of Labor Required:     "<<setw(3)<<hLabor<<endl;
    cout<<"Total Cost Of Paint:        $"<<setw(3)<<pCost<<endl;
    cout<<"Total Cost Of Labor:        $"<<setw(3)<<lCost<<endl;
    cout<<"Total Cost:                 $"<<setw(3)<<tCost<<endl;
}

float clcPrf(float nS,float sP,float sC,float pC,float pP){
    float profit=0;
    
    profit=((nS*sP)-sC)-((nS*pP)+pC);
    
    return profit;
}

bool isPrime(int num){
    bool status;
    
    for(int count=num-1;count>1;count--){
        
        if(num%count==0){                   //Composite
            status=false;
            return status;
            break;
        }
        else
            status=true;
                                            //Prime
    }
        return status;   
}


