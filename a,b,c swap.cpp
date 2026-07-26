#include<iostream>
using namespace std;
int main()
{
	int a=20,b=10,c=30;
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of b is: "<<b<<endl;
	cout<<"The value of c is: "<<c<<endl;
	
	 a=c ; //a=30
	 c=b ;  //c=10
	 b=a-c;  //b=20
	 
	 cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of b is: "<<b<<endl;
	cout<<"The value of c is: "<<c<<endl;
}
