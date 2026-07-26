#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks: ";
	cin>>marks;
	
	if(marks>=80){
		cout<<"Grade is A1 ";
	}
	else if(marks>=70){
		cout<<"Grade is A ";
	}
	else if(marks>=60){
		cout<<"Grade is B ";
}    
	else if(marks>=50){
		cout<<"Grade is C ";
	}
	else{
		cout<<"Fail ";
		return 0;
	}
	
}
