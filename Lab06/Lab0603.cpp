#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 

//function declarations
void getInput(double &planeSpeed, double &windSpeed, int &windDirection, double &cityDistance, int &cityDirection);

double headingConversion(int cityDirection);

double headingAdjustment(double planeSpeed, double windSpeed, int windDirection, double cityDistance, double cityDirection);

double flightTime(double planeSpeed, double cityDistance, double newHeading, double direction);

void outputData(double newHeading, double time);

int main ()
{
	//initalizing the variables
    int WDirection = 0, CDirection = 0;
    double Pspeed = 0.0, Wspeed = 0.0, distance = 0.0, heading = 0.0, newdirection = 0.0, duration = 0.0;   
    //program header
	cout<<"This program will compute the necessary heading adjustment for your flight, and provide the estimated flight time.\n";
    
    //getting the input we need from the user
    getInput(Pspeed, Wspeed, WDirection, distance, CDirection);
    //calculation functions for heading, new heading, and the flight time
    heading = headingConversion(CDirection);
    newdirection = headingAdjustment(Pspeed, Wspeed, WDirection, distance, heading);
    duration = flightTime(Pspeed, distance, newdirection, heading);
    //outputting the data
    outputData(newdirection, duration);
    
return 0;   
}


void getInput(double &planeSpeed, double &windspeed, int &windDirection, double &cityDistance, int &cityDirection)
{
    cout<<"Enter the aircraft cruising speed in still air (in km/h): "; 
    cin>>planeSpeed; 
    cout<<endl
        <<"cruising speed = "<<planeSpeed<<endl; 
    cout<<"Enter the wind speed in km/h: "; 
    cin>>windspeed;
    cout<<endl
        << "wind speed = " <<windspeed<<endl;
    cout<<"Enter 1 if the wind is blowing from the West and -1 if wind is blowing from the East: ";
    cin>>windDirection; 
    cout<<endl<<"The wind is blowing from the ";
    if (windDirection==-1)
    cout<<"East."<<endl;
    else if (windDirection==1)
    {
    cout<<"West."<<endl; 
    }
    cout<<"Enter the distance between the originating and destination cities, in km: "; 
    cin>>cityDistance; 
    cout<<endl
        <<"flight distance = "<<cityDistance<<endl; 
    cout<<"Enter the compass direction of the destination city, relative to the originating cities, using the following values:"<<endl
    <<"1: ENE"<<endl<<"2: NE"<<endl<<"3: NNE"<<endl<<"4: N"<<endl<<"5: NNW"<<endl<<"6: NW"<<endl<<"7: WNW"<<endl<<"8: W"<<endl<<"9: WSW"<<endl<<"10: SW"<<endl<<"11: SWS"<<endl<<"12: S"<<endl<<"13: SSE"<<endl<<"14: SE"<<endl<<"15: ESE"<<endl<<"16: E"<<endl;
    cin>>cityDirection; 
    cout<<endl<<"flight direction = "; 
    switch(cityDirection){
    case 1:
        cout<<"1: ENE";//1/8
        break; 
    case 2:
        cout<<"2: NE";//2/8
        break; 
    case 3:
        cout<<"3: NNE";//3/8
        break; 
    case 4:
        cout<<"4: N";//1/2
        break; 
    case 5:
        cout<<"5: NNW";//5/8
        break; 
    case 6:
        cout<<"6: NW";//6/8
        break; 
    case 7:
        cout<<"7: WNW";//7/8
        break; 
    case 8:
        cout<<"8: W";//8/8
        break; 
    case 9://9/8
        cout<<"9: WSW";
        break; 
    case 10:
        cout<<"10: SW";
        break; 
    case 11:
        cout<<"11: SWS";
        break; 
    case 12:
        cout<<"12: S";
        break; 
    case 13:
        cout<<"13: SSE";
        break; 
    case 14:
        cout<<"14: SE";
        break; 
    case 15:
        cout<<"15: ESE";
        break; 
    case 16:
        cout<<"16: E";
        break; 
    default:
        cout<<"INVALID INPUT";
        break; 
    }   
return; 
}

double headingConversion(int cityDirection)
{
double angleDirection =((M_PI/8)*(cityDirection));
cout<<"\noriginal flight heading = "<<(angleDirection*(180/M_PI))<<endl; 
return angleDirection;


}

double headingAdjustment(double planeSpeed, double windSpeed, int windDirection, double cityDistance, double cityDirection)
{
double winddirandspeed = (windSpeed*windDirection);
double theta=cityDirection-asin((-winddirandspeed/planeSpeed)*sin(cityDirection)); 
return theta; 


}

double flightTime(double planeSpeed, double cityDistance, double newHeading, double direction)
{
    double time = 0.0;
    time = cityDistance/(planeSpeed*sin(newHeading)/sin(direction));
cout<<planeSpeed<<endl<<cityDistance<<endl<<newHeading<<endl<<direction;
    return time;

}

void outputData(double newHeading, double time)
{
	
	newHeading*=(180/M_PI);
    cout<<endl<<"Your adjusted flight heading is: "<<newHeading<<" degrees."<<endl<<"Your estimated flight time is: "<<time<<" hours.";
}
