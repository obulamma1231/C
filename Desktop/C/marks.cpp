//Students total and average calculation for the given input marks
#include<iostream>
using namespace std;
int main()
{
	int m,p,c,total;  // variable declaration
	float avg;
	cout<<"\n Enter marks in 3 subjects";
	cin>>m;
	cin>>p;
	cin>>c;
	// cin>>m>>p>>c;
	total=m+p+c;  // calculating total marks
	cout<<"Total Marks is "<<total;
	avg=total/3.0;
	cout<<"Average Marks is"<<avg;	
	return 0;
}



