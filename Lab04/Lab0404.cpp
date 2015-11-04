#include <iostream>
#include <stdlib.h> 
#include <cmath>
using namespace std; 

int main ( )
{
	int rand1, rand2;
	int counter1, counter2=0, counter3=0;
	int response; 
	int answer;   
	
	while (response!=-1){
	rand1 = (rand()%10);
	rand2 = (rand()%10);
	answer = rand1*rand2; 
	counter1=0; 
	cout<<"How much is " <<rand1 << " times "<<rand2<<"? \n";
	cin>>response;
	while (response!=answer&&response!=-1){
		counter1++; 
		cout<<"You got the answer wrong, pleae try again.\n";
		cout<<"How much is " <<rand1 << " times "<<rand2<<"?\n";
		cin>>response; 
	}
	if (response==answer){
		cout<<"You got the answer right!\n";
	}

	if (counter1==0&&response!=-1){
		counter2++; 
	}
	
	else if (response==-1){
		cout<<"\nYou exited the program. That counts as an unanswered question.\n";
	}
	counter3++; 
	 
}
	cout<<counter2<<" questions were answered correctly on the first try out of "<<counter3<<" questions total."; 

}



