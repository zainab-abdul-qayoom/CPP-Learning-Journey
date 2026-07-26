#include<iostream>
using namespace std;
int main(){
	int leapYear;
	cout<<"Enter Year No: ";
	cin>>leapYear;
	
	if(leapYear % 4 == 0){
		cout<<"This year is Leap Year "<<leapYear;
	}
	else{
		cout<<"This year is not Leap Year "<<leapYear;
	}
}
