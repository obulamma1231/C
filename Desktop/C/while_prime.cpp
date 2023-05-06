/* printing the pattern
	*
   **
  ***
 ****
*/
#include<iostream>
using namespace std;
int main()
{
	int rows,i,j,k;
	cout<<"Enetr number of rows:";
	cin>>rows;
for(i=rows;i>=1;i--)
{
	for(k=0;k<i;k++)
	{
		cout<<"*";
	}
	cout<<"\n";
	
}
}
	
