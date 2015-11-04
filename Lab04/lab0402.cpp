#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int num = 0;
	unsigned int answer = 1;
	cout<<"This program will compute the factorial of a number.\n";
	cout<<"Please enter an integer that is positive or equal to zero, then press enter:";
	cin>>num;
	
	while(num<0)
	{
		cout<<"The input is invalid, please enter a non-negative integer, then press enter:";
		cin>>num;
	}
	for(int count=num+1;count>1;count--)
	{
		answer = answer*num;
		num--;
	}
	cout<<"The result of the factorial calculation is: ";
	cout<<answer<<endl;
	
	system("pause");
	return 0;
}
