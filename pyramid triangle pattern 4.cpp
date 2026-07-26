#include<iostream>
using namespace std;

void PyramidPattern4(int n)
{
	for(int i=n;i>=1;i--)   
	{
		for(int k=n-i;k>0;k--)   
		cout<<" ";
		for(int j=i;j>0;j--)  
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
     int num;
     cout<<"Enter the number of level of variable"<<endl;
	cin>>num;
	PyramidPattern4(num);
	cout<<endl;
	
}
