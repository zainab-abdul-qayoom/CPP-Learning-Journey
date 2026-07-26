#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter the marks here: ";
	cin>>marks;
	if(marks<20)
	goto warning;
	warning: cout<<"Need very hardwork in examination ";
}
