#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	bool flag = true;  //n is prime
	for(int i=2;i<=n/2 //or n-1;i++)
	{
		if(n%i==0)
		{
		flag = false; //n is not-prime.
		break;	
		}
	}
if(flag==true)
{
	cout<<"Prime";
}
else cout<<"Not-prime";
}
