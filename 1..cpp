#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter any number to know whether it is even or odd: ";
	cin>>num;
	
	if(num %2==1)     //(num%2==0) if in if num is even then
	{
		cout<<"The number u dial is odd.";     
	}
	else{
		cout<<"The number u dial is even. ";
	}
	return 0;
}
