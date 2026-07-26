#include<iostream>
using namespace std;
int main()
{
//	Ques: Write a program to create a calculator that performs arithmetic operators (add, subtract,
//	multiply and divide) using switch  case . The calculator should input two
//	numbers and an operator from user. 

int num1,num2;
char opera;
cin>>num1;
cin>>opera;
cin>>num2;

switch(opera)
{


	case '+':
	    cout<<num1+num2;
	        break;
	case '-':
		cout<<num1-num2;
		     break;
	case '*':
		cout<<num1*num2;
		     break;
	case '/':
		cout<<num1/num2;
		    break;
	default: 
		cout<<"Invalid Operator";
}
	
}
