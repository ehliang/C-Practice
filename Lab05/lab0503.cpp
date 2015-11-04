#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	//variable declaration
	double pi = 0.0, old_pi = 0.0, check_pi =0.0, denom = 1.0;
	int dec_same = 0, consistent_count = 3, change = 1, count = 1, pi_old = 0, pi_check = 0;
	
	//getting input from user
	cout<<"Please enter how many decimal places you want to be consistent before stopping:";
	cin>>dec_same;
	
	//input checking
	while(dec_same<1 || dec_same>6)
	{
		cout<<"You have selected an invalid option. Please select a number from 1 to 6:";
		cin>>dec_same;
	}
	
	do
	{
		old_pi = pi;//recording old pi value for checking
		//adding or subtracting the next number in the series
		if(change>0)
		{
			pi = pi + (4/denom);
			denom += 2;
			change--;
		}else
		{
			pi = pi - (4/denom);
			denom += 2;
			change++;
		}
		
		//setting precision
		std::cout.precision(12);
		std::cout << std::fixed;
		
		//outputting pi
		cout<<count<<"     "<<pi<<endl;
		count++;

		check_pi = pi;
		
		//converting the pis into comparable numbers
		old_pi = old_pi * pow(10, dec_same);
		check_pi = check_pi * pow(10, dec_same);
		old_pi = floor(old_pi);
		check_pi = floor(check_pi);
		
		//comparing pis
		if(old_pi == check_pi)
		{
			consistent_count--;
		}
	}while(consistent_count>1);
	
	system("pause");
	return 0;
}
