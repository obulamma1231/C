//Sequence control instruction : This ensure that the instructions are executed in the same order in which they appear in the program.
//Control Statements Types Used in C Language
//1.Conditional control Statement. 2. Loop Statements. 3. jump control statement
#include<iostream>
using namespace std;
int main()
{
    int month_number;
    cout<<"\n Enter Month number";
    cin>>month_number;
	switch (month_number)
	{
		case 1:
			cout<<"January";
			break;
		case 2:
			cout<<"February";
			break;
		case 3:
			cout<<"March";
			break;
		case 4:
			cout<<"April";
			break;
		case 5:
			cout<<"May";
			break;
		case 6:
			cout<<"June";
			break;
		case 7:
			cout<<"July";
			break;
		case 8:
			cout<<"August";
			break;
		case 9:
			cout<<"September";
			break;
		case 10:
			cout<<"October";
			break;
		case 11:
			cout<<"November";
			break;
		case 12:
			cout<<"December";
			break;
			
		default:
			cout<<"\n Invalid Month";
	}    
    
return 0;
	
}
	
