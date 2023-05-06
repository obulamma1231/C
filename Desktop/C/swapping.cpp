//swapping of 2 numbers
#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	/* 3rd variable
	int t;
	cout<<"\n Before swapping a = "<<a<<" And b = "<<b;
	t=a;
	a=b;
	b=t;
	cout<<"\n After swapping a = "<<a<<" And b = "<<b;
	
	//Arthimetic operators
	cout<<"\n Before swapping a = "<<a<<" And b = "<<b;
	a=a+b; //30
	b=a-b; //30-20 =10
	a=a-b ;// 20-10 =20
	cout<<"\n After swapping a = "<<a<<" And b = "<<b;
	*/
  // Using bitwise operators
	a=10;
	b=20;
	cout<<"\n Before swapping a = "<<a<<" And b = "<<b;
	a=a^b; //30
	b=a^b; //30-20 =10
	a=a^b ;// 20-10 =20
	cout<<"\n After swapping a = "<<a<<" And b = "<<b;
	
	return 0;
}
