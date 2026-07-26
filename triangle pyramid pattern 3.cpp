#include<iostream>
using namespace std;

voidPyramidPattern3(int num)
{
	for(int i=1;i<=num;i++)
	{
		for(int k=num-i;k>0;k--)
		{
			cout<<" ";
		}
		 for(int j=1;j<=num;j++)
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

