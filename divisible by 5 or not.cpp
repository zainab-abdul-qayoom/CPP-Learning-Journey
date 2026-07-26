#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter positive number to know is it divisible by 5 or not: ";
	cin>>n;
	
	if(n%5==0)
	{
		cout<<"Divisible by 5";
	}
	else{
		cout<<"Not-divisible by 5";
	}
	return 0;
}
