#include<iostream>
using namespace std;

void PyramidPattern3(int n)
{
	for(int i=1;i<=n;i++)   //for new row
	{
		for(int k=n-i;k>0;k--)   //for space
		
			cout<<" ";
		
		 for(int j=1;j<=i;j++)   //for print *
		 {
		 	cout<<"*";
		 } 
		 cout<<endl;
	}
}
int main()
{
	int num;
	cout<<"Enter the numbers of levels of pyramid"<<endl;
	cin>>num;
	voidPyramidPattern3(num);
	cout<<endl;
}

