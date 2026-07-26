#include<iostream>
using namespace std;
int main()
{
//	Ques: Take positive integer input and tell if it is divisible by 5 or 3 but not by 15.

int n;
cout<<"Enter number: ";
cin>>n;

if((n%5==0 || n%3==0) && (n%15!=0))
{
	cout<<n<<" is divisible by 5 or 3 but not divisible by 15.";
}
else 
{
	cout<<n<<" is not divisible by 5 or 3 but divisible by 15.";
}
}
