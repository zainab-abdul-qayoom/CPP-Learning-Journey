#include<iostream>
using namespace std;
int main()
{
	int str=1,steps=5,sp=3*4;
	for(int m=1;m<=3;m++)
	{
		for(int i=str;i<=steps;i++)
	{
		for(int j=sp;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	str=str+3; steps=steps+3;
	}
	for(int i=1;i<=3;i++)
	{
		cout<<"\t* * *"<<endl;
	}
}
