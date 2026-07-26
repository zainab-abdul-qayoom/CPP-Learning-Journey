#include<iostream>
using namespace std;
int main()
{
	int n=10,sum=0;
	for(int i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
		sum=sum+i;	
		}
		cout<<sum;
	}
}
