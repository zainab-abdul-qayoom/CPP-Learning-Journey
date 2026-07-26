#include<iostream>
using namespace std;
void halfPyramidPattern2(int n)
{
	for(int i=n;i>=1;i--)
	{
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
	cout<<"Enter number of the levels of pyramid :"<<endl;
	cin>>num;
	halfPyramidPattern2(num);
	cout<<endl;
	

}
