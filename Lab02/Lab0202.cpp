#include <iostream>
using namespace std; 
double errorcheck (double number);
int main ( )
{
	double numofemployees, percentjunior, percentsenior, percentadmin, totalpencils, totalpens, totalerasers, box_pencils, box_pens, box_erasers; 
	cout << "How many total employees are there? ";
	numofemployees = errorcheck(numofemployees);
	cout << "You have " << numofemployees << " employees" << endl; 
	cout <<"What percentage are junior engineers? (in %) "; 
	percentjunior = errorcheck(percentjunior);
	cout << percentjunior << "% of your employees are junior engineers" << endl; 
	cout <<"What percentage are senior engineers? (in %) "; 
	percentsenior = errorcheck(percentsenior);
	cout << percentsenior << "% of your employees are senior engineers" << endl; 
	percentadmin = (100 - percentjunior-percentsenior); 
	cout << "The remainder of your employees is " << percentadmin << "% administrative staff"<<endl; 
	totalpencils = ((10*(percentjunior/100) + 7*(percentjunior/100) + 2*(percentadmin/100))*numofemployees);
	totalpens = ((5*(percentjunior/100) + 5*(percentjunior/100) + 10*(percentadmin/100))*numofemployees);
	totalerasers = ((3*(percentjunior/100) + 2*(percentjunior/100) + 1*(percentadmin/100))*numofemployees);
	box_pencils = (totalpencils/25);
	box_pens = (totalpens/10); 
	box_erasers = (totalerasers/10);
	cout << "You need: " << totalpencils << " pencils, " << totalpens << " pens and " << totalerasers << " erasers.\n"; 
	cout << "Therefore, you need: " << box_pencils << " boxes of pencils, " << box_pens << " boxes of pens and " << box_erasers << " boxes of erasers.\n"; 	
	system("pause"); 
	return 0; 
	
}
double errorcheck (double number)
{   
	while (1)
	{
		cin >> number; 
		if (number>=0)
		{
			return number; 
			break; 
		}
		else 
		{
			cout << "Invalid input! Try again.\n";
		    cin.clear();
		}	
	}
	
	
}
