#include <iostream>
using namespace std; 
int main ( )
{
	int time=0, weeks=0, days=0, hours=0, mins=0, secs=0;
	
	
	cout <<"Please enter the number of seconds you want converted:";
	cin >>time;
		
	while(time<0)
	{
		cout<<"Invalid input, please try again:\n";
		cin>>time;
	}
	weeks=time/(604800);
	secs=time%604800;
	days=secs/86400;
	secs=secs%86400;
	hours=secs/3600;
	secs=secs%3600;
	mins=secs/60;
	secs=secs%60;
	cout<<"That amount of seconds is equal to: \n";
	cout<<weeks<<" Week(s), "<<endl<<days<< " Day(s), "<<endl<<hours<<" Hour(s), "<<endl<<mins<<" Minute(s), "<<endl<<secs<<" Second(s).";
	
	
}
