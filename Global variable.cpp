#include<iostream>
using namespace std;
void add(int c);   //function prototype
int a = 20;        //global variable
int main()
{
	int x;  //local variable
	cin>>x;
	add(x);
	cout<<"The value of a is....   
	"<<a;
	return 0;
}
void add(int c)
{
	int b; //local variable
	b=a+c;
	cout<<"\n The addition of two numbers is..."<<b;
}
