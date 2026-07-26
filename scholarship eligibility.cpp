#include<iostream>
using namespace std;
int main()
{
	float gpa;
	cout<<"Enter Your GPA here: ";
	cin>>gpa;
	float attendance;
	cout<<"Enter Your attendance here: ";
	cin>>attendance;
	
	if(gpa > 4 || attendance > 100){
		cout<<"Invalid !";
	}
	
	else if(gpa >= 3.5 && attendance >= 90){
		cout<<"Congrats! You are perfectly Eligible for Scholarship";
	}
	
	else if(gpa >= 3 && attendance >= 80){
		cout<<" You are Eligible for another Scholarship";
	}
		
	else{
		cout<<"Sorry! You are not Eligible for scholarsip";
	}
	return 0;
	 
}
