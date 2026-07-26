#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	
//	switch (a==1){
//		case 1:
//		cout<<"One";
//		break;
//		
//		case 2:
//			cout<<"Two";
//			break;
//			
//		default:
//			cout<<"Enter correct num";
//	}

	switch(a%2==0){
		case 0:
		cout<<"Odd number";
		break;
		
		case 1:
		cout<<"Even Number";
		break;
		
		
		default:
		cout<<"Invalid ";
	}


}
