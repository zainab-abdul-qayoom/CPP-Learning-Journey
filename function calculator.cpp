#include<iostream>
using namespace std;
void calculate()
{
	int a,b;
	char cal;
	cout<<"Enter number: 1";
	cin>>a;
	cout<<"Enter the operation: ";
	cin>>cal;
	cout<<"Enter number: 2";
	cin>>b;
	
	switch(cal){
		case 1:
			int add;
			cout<<"The Addition is = "<<a+b;
		case 2:
			int sub;
			cout<<"The subtraction is = "<<a-b;
		case 3:
			int multi;
			cout<<"The multiplication is = "<<a*b;
		case 4:
			int div;
			cout<<"The division is = "<<a/b;
	}


}
int main()
{
	calculate();
	return 0;
}
