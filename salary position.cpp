#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"Enter Your Salary: ";
	cin>>salary;
	
	if(salary <= 100000){
		cout<<"Manager";
	}
	else if(salary <= 70000)
	{
		cout<<"Superviser";
	}
	else{
		cout<<"Worker";
	}
	return 0;
}
