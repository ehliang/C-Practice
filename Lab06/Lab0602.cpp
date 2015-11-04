#include <iostream>
#include <cstdlib>
using namespace std; 

//function declarations
void getGrades(int &f, int &d, int &c, int &b, int &a, int &aplus, int &students, double &score, double &combinedscore);
void printHistogram(int f, int d, int c, int b, int a, int aplus);

int main ()
{
	//variable declarations
	int fail = 0, fifty = 0, sixty = 0, seventy = 0, eighty = 0, ninety = 0, numofstudents = 0;
 	double grade = 0.0, total = 0.0, average = 0.0;
 	
 	//getting the grades
 	getGrades(fail, fifty, sixty, seventy, eighty, ninety, numofstudents, grade, total);
 	
 	//calculating average and outputting it
 	average = total/numofstudents;
 	cout<<"\nThe class average is: "<<average<<endl;
 	
 	//outputting histogram
 	printHistogram(fail, fifty, sixty, seventy, eighty, ninety);
	return 0; 
}

//this function receives the number of grades and the grades
void getGrades(int &f, int &d, int &c, int &b, int &a, int &aplus, int &students, double &score, double &combinedscore)
{
	//gets number of grades
	cout<<"\nPlease enter the number of student grades you have to enter: ";
	cin>>students;
	
	for(int count = students; count > 0; count--)
	{
		//gets grades
		cout<<endl<<"Please enter the student's grade: ";
		cin>>score;
		combinedscore += score;
		
		//counts how many students are in each catagory
		if(score<50)
		{
			f++;
		}else if(score<60)
		{
			d++;
		}else if(score<70)
		{
			c++;
		}else if(score<80)
		{
			b++;
		}else if(score<90)
		{
			a++;
		}else
		{
			aplus++;
		}
				
	}
}

//outputs the histogram
void printHistogram(int f, int d, int c, int b, int a, int aplus)
{
	cout<<"  0-49: ";
 	for(int count = f; count > 0; count--)
 	{
 		cout<<"*";
 	}
 	cout<<endl<<" 50-59: ";
 	for(int count = d; count > 0; count--)
 	{
 		cout<<"*";
 	}
 	cout<<endl<<" 60-69: ";
 	for(int count = c; count > 0; count--)
 	{
 		cout<<"*";
 	}
 	cout<<endl<<" 70-79: ";
 	for(int count = b; count > 0; count--)
 	{
 		cout<<"*";
 	}
 	cout<<endl<<" 80-89: ";
 	for(int count = a; count > 0; count--)
 	{
 		cout<<"*";
 	}
 	cout<<endl<<"90-100: ";
 	for(int count = aplus; count > 0; count--)
 	{
 		cout<<"*";
 	}
}






