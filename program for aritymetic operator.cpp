#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char ope;
	cout<<"Enter the number 1: ";
	cin>>num1;
	cout<<"Enter the number 2: ";
	cin>>num2;
	cout<<"Enter the Arithmetic operator to calculate: ";
	cin>>ope;


	if(ope == '+' ){
			int add;
		add = num1+num2;
		cout<<"The addition of two numbers "<< num1 << " and " <<num2<<" is: "<<add;
		
	}
	
	else if (ope == '-'){
		int sub;
		sub=num1-num2;
		cout<<"The subtraction of two numbers "<< num1 << " and " <<num2<<" is: "<<sub;
		
	}
	
	else if(ope == '*'){
		
		int multi;
	     multi = num1*num2;
	     cout<<"The multiplication of two numbers "<< num1 << " and " <<num2<<" is: "<<multi;
	     
	}
	     
	else if(ope == '/')
	     {
	     	int div;
	     div = num1/num2;
	     cout<<"The divition of two numbers "<< num1 << " and " <<num2<<" is: "<<div;
	     
		}
	     else{
	     	cout<<"Invalid calculation.";
	     	
		}
		return 0;
}
