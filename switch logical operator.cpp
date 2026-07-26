#include<iostream>
using namespace std;
int main()
{
	char calculator;
	int num1,num2;
	cout<<"\n \t Enter the number one: ";
	cin>>num1;
	cout<<"\n \t Enter the number two: ";
	cin>>num2;
	cout<<"\n \t Enter a for addition: ";
	cout<<"\n \t Enter s for subtraction: ";
	cout<<"\n \t Enter m for multiplication: ";
	cout<<"\n \t Enter d for division:"<<endl;
	cin>>calculator;
	switch(calculator){
		case 'a':
			
			cout<<"\n \t The addition of two numbers is: "<<num1+num2;
			break;
	
	
		case 's':
			cout<<"\n \t The subraction of two numbers is: "<<num1-num2;
			break;
		
		
		case 'm':
			cout<<"\n \t The multiplication of two numbers is: "<<num1*num2;
			break;
		        
		case 'd':
			cout<<"\n \t The division of two numbers is: "<<num1/num2;
			break;
			default:
				cout<<"Invalid !";
	
	}
}
		


