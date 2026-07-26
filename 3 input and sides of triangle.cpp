#include<iostream>
using namespace std;
int main()
{
//	Ques: Take 3 numbers input and tell if they can be the sides of a triangle.
	
	int a;
	cout<<"Enter 1st side: ";
	cin>>a;
	
	int b;
	cout<<"Enter 2nd side: ";
	cin>>b;
	
	int c;
	cout<<"Enter 3rd side: ";
	cin>>c;
	
	if((a+b)>c && (b+c)>a && (c+a)>b)
	{
		cout<<"Valid Triangle";
	}
	else{
		cout<<"Not Valid Triangle";
	}
	
	
	
}
