#include <iostream>
using namespace std; 
int possibleRootNum, possibleSquareNum; 
    int checkSquareRoot (int a, int b);
        int checkSquare (int a, int b);
int main ( )
{
    int i = 0;
		cout <<"Please enter your first number.";
	cin >> possibleRootNum; 
	cout <<"Please enter your second number.";
	cin >> possibleSquareNum; 	  
    
    if (checkSquareRoot(possibleRootNum, possibleSquareNum) && (checkSquare(possibleRootNum, possibleSquareNum)))
    {
    	cout << possibleRootNum <<" is both the square and the square root of " << possibleSquareNum;	
    }
    else if (checkSquareRoot(possibleRootNum, possibleSquareNum))
    {
    	cout << possibleRootNum <<" is the square root of " << possibleSquareNum; 
    }
    else if (checkSquare(possibleRootNum, possibleSquareNum)) 
    {
    	cout << possibleRootNum <<" is the square of " << possibleSquareNum;  	
    }
    else 
    {
    	cout << possibleRootNum <<" is neither the square nor the square root of " << possibleSquareNum;  
    }
	
	cout << "\nA program by: Ethan Liang and Nathan Hoeve\n";

	system("pause"); 

	return 0;
}
    int checkSquareRoot (int a, int b)
    {
    	if (a*a==b) 
    	{
    		return true; 
    	}	 
    	else 
    	{
    		return false; 
    	}
    }
    
    int checkSquare (int a, int b)
    {
    	if (b*b==a)
    	{
    		return true;
    	}
    	else 
    	{
    		return false; 
    	}    	
    }


