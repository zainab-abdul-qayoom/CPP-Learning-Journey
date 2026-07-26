#include<iostream>
using namespace std;
int main()
{
//	Ques: Take positive integer input and tell if it is a three digit number or not.
	
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	if(n>99 && n<1000)
	{
		cout<<n<<" is 3-digit number";
	}
	else
	{
	    cout<<n<<" is not 3-digit number";	
	}
}
