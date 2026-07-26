#include<iostream>
using namespace std;

int main()
{
	int a,b,max;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	/*if(a>b)
	{
		cout<<"a="<<a;     //the bigger value will be print if a value is 30 and b value is 20 then a value will be printed. but if b value will be greater than a then b value will be printed.
	}
	else
	{
		cout<<"b="<<b;
	}*/
	max=(a>b)?a:b;
	cout<<max;
	return 0;
}
