#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 
int main ()
{
	int rows;
	cout<<"Please enter and odd positive number between 3 to 19 inclusive for the number of rows you want displayed.\n";
	cin>>rows;
	while (rows<3 || rows>19 || (rows%2)==0)
	{
		cout<<"Invalid input, try again.\n";
		cin>>rows;
		 
	}
	cout<<endl; 
	int adj_rows= (rows-1)/2; //adjusted row numbering. This number becomes the largest element in the row numbering with center row number 0.
 	for (int i=(-1*adj_rows); i<=adj_rows; i++)
 	{
 		//numbering -3,-2,-1,0,1,2,3
 		//output   1,3,5,7,5,3,1
 		//space 3,2,1,0,1,2,3
 		//numbering -4,-3,-2,-1,0,1,2,3,4
 		//output 1,3,5,7,9,7,5,4,3,1
 		//space 4,3,2,1,0,1,2,3,4
		 int prnt_num=rows-(2*abs(i));
		 int space_num=abs(i); 
		 for (int k=0; k<space_num;k++){
		 	cout<<" ";//spacing
		 }
		 for (int j=0; j<prnt_num; j++){
		 	
			 cout<<"*";//asterisk
		 }
		 cout<<endl; 
 	}
return 0; 
}






