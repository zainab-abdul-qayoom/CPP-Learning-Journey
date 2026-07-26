#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n \t Enter any number to know whether it is prime or not: ";
	cout<<"\n \t  =================================================== ";
	cin>>n;
	
	bool isPrime = true;
	
	if( n<=1)
	{
		isPrime = false;
		
	}
	else{
		for(int i=2; i*i<=n;i++)
		{
			if(n%i==0){
				isPrime = false;
				break;
			}
		}
	}
	if(isPrime)
	cout<<"\n \t Prime number";
	else{
		cout<<"\n \t Not prime number";
	}
	return 0;
}
