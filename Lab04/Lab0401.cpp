#include <iostream>
using namespace std; 
int main ( )
{
int u11, u12, u21, u22, v11, v12, v21, v22, choice=0; 
int ui, uj, vi, vj; 

cout << "2-Dimensional Vector Operations\nVector u has components U1 and U2.\nVector v has components V1 and V2.\n\n";
cout <<"Please enter the components for u.\n";
cout <<"First enter U1 as two integers: ";
cin >> u11 >> u12;
cout <<"\nNow enter U2 as two integers: ";
cin >> u21 >> u22;

cout <<"\nPlease enter the components for v.\n";
cout <<"First enter V1 as two integers: ";
cin >> v11 >> v12;
cout <<"\nNow enter V2 as two integers: ";
cin >> v21 >> v22;

cout <<"\nYou have entered:\n"; 
cout << "U1 = (" <<u11<<","<<u12<<")\n";
cout << "U2 = (" <<u21<<","<<u22<<")\n";
cout << "V1 = (" <<v11<<","<<v12<<")\n";
cout << "V2 = (" <<v21<<","<<v22<<")\n";

ui = u21-u11; 
uj = u22-u12;
vi = v21-v11;
vj = v22-v12;

cout <<"\nThe vectors u and v are:\n";
cout <<"u = "<<ui<<"*i + "<<uj<<"*j\n"; 
cout <<"v = "<<vi<<"*i + "<<vj<<"*j\n\n";




while (choice != -1){
cout <<"Select a vector operation to perform:\n";
cout <<"1: u + v (addition)\n";
cout <<"2: u x v (cross product)\n";
cout <<"3: u . v (dot product)\n";
cout <<"Enter 1-3 from the menu above, or -1 to exit:\n";
cin >> choice; 

switch (choice){
	case 1:
		cout<<"\nu + v = "<<(ui+vi)<<"*i + "<<(uj+vj)<<"*j\n\n";   
		break;
	case 2: 
		cout<<"\nu x v = "<<(ui*vj)-(uj*vi)<<"\n\n"; 
		break; 
	case 3: 
		cout<<"\nu . v = "<<(ui*vi)+(uj*vj)<<"\n\n";  
		break;
	case -1:
		break;	
	default: 
		cout<<"\n\nInvalid input.\n\n";
}



}





}
