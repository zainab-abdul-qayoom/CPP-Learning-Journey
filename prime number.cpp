#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number";
	cin>>n;
	bool isPrime=true;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			isPrime=false;
			break;
		}
		
	}
if(isPrime==true)
{
	cout<<n<<"is prime: "<<endl;
}
else
cout<<n<<"Not-prime: "<<endl;
}
