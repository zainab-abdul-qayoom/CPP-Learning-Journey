#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Please Enter Your Age Here:\n";
	cin>>age;
	if(age < 18)
	{
		cout<<"You are minor.\n";
	}
	else{
		if (age >= 18)
		{
			cout<<"You are eligible to work\n";
		}
		else{
			cout<<"you are too old to work per the government rules\n";
		}
	}
	return 0;
}
