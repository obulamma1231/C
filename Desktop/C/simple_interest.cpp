//finding the area and peremeter for a circle area=3.14*r*r and peremeter =2*3.14.*r
#include<iostream>
using namespace std;
int main()
{
	int r;  // variable declaration
	float area;
	float peremeter;
	cout<<"\n Enter Radius ";
	cin>>r;
	// cin>>p>>t>>r;
	area=3.14*r*r;  // calculating area 
	peremeter=2*3.14*r; // Calculating peremeter
	cout<<"\n Area is "<<area;
	cout<<"\n Peremeter is"<<peremeter;
	return 0;
}

