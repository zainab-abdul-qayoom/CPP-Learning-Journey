#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20;
	cout<<"The value of a "<<a<<endl;
	cout<<"The value of b "<<b<<endl;
	
	b = a + b;	//30
	a = b - a;	//20
	b = b - a;	//10
	
	cout<<"The value of a "<<a<<endl;
	cout<<"The value of b "<<b<<endl;
	
	
	
}
