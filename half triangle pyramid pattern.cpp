#include<iostream>
using namespace std;

void halfPyramidpattern(int n)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	
	int num;
	cout<<"Enter number of levels of the patterns :"<<endl;
	cin>>num;
	halfPyramidpattern(num);
	cout<<endl;
}
