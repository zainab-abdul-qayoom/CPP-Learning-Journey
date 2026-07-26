#include<iostream>
using namespace std;
int main()
{
	int sp=3,st=3,st2=10;
	for(int i=st;i<=5;i++)
	{
		for(int j=sp;j>=1;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=st;k++)
		{
			cout<<"* ";
		}
		
		for(int j=sp;j>1;j--)
		{
			cout<<"  ";
		}
		for(int k=1;k<=st;k++)
		{
			cout<<"* ";
		}
		
		
		cout<<"\n";
		sp--;
		st++;
	}
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<st2;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		st2=st2-2;
	}
}
