//to check whether a bit is on or off
#include<iostream>
using namespace std;
int main()
{
	int x,pos;
	int result;
	cout<<"\n Enter a number";
	cin>>x;
	cout<<"\n Enter bit position";
	cin>>pos;
	result= x & (1<<(pos-1));
	cout<<"result values is :"<<result;
	return 0;
}
