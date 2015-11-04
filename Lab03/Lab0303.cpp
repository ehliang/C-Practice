#include <iostream>
#include <cmath>
using namespace std; 
int main ( )
{
	double windchill = 0, windspd = 0, temp = 0, temp_faren=0, windspd_mph=0;
	cout<< "Please enter the current air temperature in Celius: ";
	cin>>temp;
	cout<< "Please enter the current wind speed in kilometers per hour: ";
	cin>>windspd;
	
	while(windspd < 0)
	{
		cout<<"Invalid wind speed, please try again:\n";
		cin>> windspd;
	}
	
	temp_faren = ((temp*9/5)+32);
	windspd_mph = windspd*0.6215;

	
	if (windspd_mph<=4)
	{
		windchill=temp_faren; 
	
	}
	else if (windspd_mph>4 && windspd_mph<=45)
	{
		windchill=(91.4-(10.45+6.69*sqrt(windspd_mph)-0.447*windspd_mph)*((91.4-temp_faren)/22.0));
	}
	else if (windspd_mph> 45)	
	{
		windchill=1.6*temp_faren-55.0;
	}
	windchill=((windchill-32)*5/9);
	cout << "The windchill index is: "<< windchill;
	
}
