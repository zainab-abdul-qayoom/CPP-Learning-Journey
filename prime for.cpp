#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the number to check: \n";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n % i==0)
		{
			break;
		}
		
	}
	if(i<n)
	{
		cout<<"Not prime";
	}
	else{
		cout<<"Prime";
	}
	return 0;
}
