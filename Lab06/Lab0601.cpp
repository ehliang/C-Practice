#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 
struct root {
	double rootnum; //stores real component
	string realproperty; //stores imaginary component if it exists
}root1,root2;


void coefficients(double &num, char sel);//call by reference to the entered number component
void calculation(double &root, double a, double b, double c,int modif,string &real);//call by reference to the imaginary component
void display(double roota, double rootb, string reala, string realb);
int main ()
{
	double a, b, c;  
	char selector ='a'; 
	int modifier=1;
	coefficients(a, selector);
	selector ='b'; 
	coefficients(b, selector);
	selector ='c'; 
	coefficients(c,selector);	
	calculation(root1.rootnum,a,b,c,modifier,root1.realproperty);
	modifier =-1;
	calculation(root2.rootnum,a,b,c,modifier,root2.realproperty);
	display (root1.rootnum, root2.rootnum, root1.realproperty, root2.realproperty);	
	
return 0; 
}

void coefficients(double &num, char sel)
{
	cout <<"Given the quadratic formula, please provide the real coefficient ";
	cout << sel<<endl; 
	cin >> num;   
	return; 

}
void calculation(double &root, double a, double b, double c,int modif, string &real){

	root=(-b+modif*sqrt(abs(b*b-4*a*c)))/(2*a);
	if ((b*b-4*a*c)<0)
	real="i ";	
	else 
	real=" ";
	return;
	
}
void display(double roota, double rootb,string reala, string realb)
{

	if (roota==rootb){
		cout<<"There is one repeated root and it is: "
	    <<roota<<reala; 
	}
	else{
		cout<<"The roots of this quadratic equation are: ";
		cout<< roota<<reala<<"and "<<rootb<<realb;  
	}
	return;
}





