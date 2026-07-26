#include<iostream>
using namespace std;
int main()
{
	int a[2][2],i,j;
	cout<<"Enter Array Elements: ";
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cin>>a[i][j];
		}
	}
	
	
	
	cout<<"\nArray Elements:\n ";
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
	return 0;
}
