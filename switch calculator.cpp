#include<iostream>
using namespace std;
int main()
{
	char calculator;
	int num1;
	cout<<"Enter 1st value: ";
	cin>>num1;
	int num2;
	cout<<"Enter 2nd value: ";
	cin>>num2;
	
	cout<<"Enter Expression you want to calculate: ";
	cin>> calculator;
	
	switch(calculator)
	{
		case '+':
			cout<<"Addition: "<<num1+num2;
			break;
			
		case'-':
			cout<<"Substraction: "<<num1-num2;
			break;
		case '*': 
		       cout<<"Multiplication: "<<num1*num2;
		       break;
		case '/':
		       cout<<"Division: "<<num1/num2;
		       break;
		default:
		       cout<<"Invalid calculation! ";      
		
	}
	
	
}
