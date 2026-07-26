#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"Enter any Number: ";
	cin>>num1;
	if(num1 > 0)
	{
		cout<<"Positive no";
	}

else if(num1 < 0)
{
	cout<<"Negative no";
}
else if(num1 == 0)
{
	cout<<"0/null";
}
return 0;
}
