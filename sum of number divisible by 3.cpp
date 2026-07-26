#include<iostream>
using namespace std;
int main()
{
	int n=10,sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i % 3==0)
		cout<<i<<endl;
		sum+=i;
	}
	cout<<"sum of numbers divisible by 3 is: "<<sum;
}
