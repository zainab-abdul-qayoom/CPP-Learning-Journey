#include<iostream>
using namespace std;
int main()
{
	
	int num1,num2;
	char letter;
	cout<<"Enter the number 1: ";
	cin>>num1;
	cout<<"Enter the number 2: ";
	cin>>num2;
	cout<<"Enter letter you want to calculate: s, m, a, d:  ";
	cin>>letter;
	if(letter == 's'){
		cout<< num1 - num2;
	}
	else if(letter == 'a'){
		cout<<num1 + num2;
	}
	else if(letter == 'm'){
		cout<<num1 * num2;
	}
	else if(letter == 'd'){
		cout<<num1 / num2;
	}
	
	
	
}
