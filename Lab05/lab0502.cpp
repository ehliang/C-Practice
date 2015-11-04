#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	//declaring variables
	int employee = 0, managercount = 0, hourlycount = 0, commissioncount = 0, piececount = 0, workertotal = 0; 
	double wage1 = 0.0, wage2 = 0.0, wage3 = 0.0, wage4 = 0.0, wagetotal = 0.0;

	while (employee!=-1){
	//receiving employee code
	cout<<"Please select an employee which you wish to calculate the wages for.\n"
		<<"Enter 1 for a manager\n"
		<<"Enter 2 for an hourly worker\n"
		<<"Enter 3 for a commission worker\n"
		<<"Enter 4 for a pieceworker\n"
		<<"Or enter -1 to exit and receive totals for every position.\n";	
	cin>>employee; 
	switch(employee){
		case 1:
			//manager case
			double weeklywage;
			managercount++;
			cout<<"What is the manager's weekly wage?\n";
			cin>>weeklywage;
			wage1+=weeklywage;
			cout<<endl;  
			break; 
		case 2: 
			//hourly wage case
			double hourlywage2,hourly2,overtime2;
			hourlycount++;
			cout<<"What is the hourly worker's hourly wage?\n";
			cin>>hourlywage2;
			cout<<"How many hours did they work?\n";
			cin>>hourly2; 
			overtime2 = hourly2-40; 
			if (overtime2>=0){
				wage2+=hourly2*hourlywage2 + overtime2*1.5*hourlywage2;
			}	
			else {
				wage2+=hourly2*hourlywage2;
			}
			cout<<endl; 
			break;
		case 3: 
			//commission worker case
			double sales; 
			commissioncount++;
			cout<<"How many sales did the commission worker make this week?\n";
			cin>>sales; 
			wage3+=200+sales*0.066; 
			cout<<endl; 
			break; 
		case 4:
			//pieceworker case
			double items, itemcost;
			piececount++;
			cout<<"How many items did the pieceworker produce this week?\n";
			cin>>items;
			cout<<"How much money did they receive for each item?\n";  
			cin>>itemcost; 
			wage4+=itemcost*items;
			cout<<endl; 
			break; 
		case -1:
			//exitting case
			cout<<endl;  
			break; 
		default: 
			//invalid input case
			cout<<"That is an invalid input. Please try again.\n";	
			break;	
	}
	


	}
	
	//calculating totals
	wagetotal = wage1 + wage2 + wage3 + wage4;
	workertotal = managercount + hourlycount + commissioncount + piececount;
	//outputting table
	cout<<endl<<"\t |Manager|Hourly Workers|Commission     |Pieceworkers   |Total  |\n"
		<<"Employees|"<<managercount<<"\t |"<<hourlycount<<"\t\t|"<<commissioncount<<"\t\t|"<<piececount<<"\t\t|"<<workertotal<<"\t|\n"
		<<"$ Total\t |"<<wage1<<"\t |"<<wage2<<"\t\t|"<<wage3<<"\t\t|"<<wage4<<"\t\t|"<<wagetotal<<"\t|\n";
	


}
