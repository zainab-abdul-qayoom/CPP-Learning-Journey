#include<iostream>
using namespace std;
int main()
{
	int physics;
	cout<<"Enter Your physics marks: ";
     cin>>physics;
     
     int chemistry;
     cout<<"Enter Your chemistry marks: ";
     cin>>chemistry;
     
     int biology;
     cout<<"Enter Your biology marks: ";
     cin>>biology;
     
     int math;
     cout<<"Enter Your mathematics marks: ";
     cin>>math;
     
     int cs;
     cout<<"Enter Your computer science marks: ";
     cin>>cs;
     
     int totalMarks = 500;
     int obtainedMarks = physics + chemistry + biology + math + cs;
     float percentage = (obtainedMarks *100) / totalMarks;
     cout<<"Your percentage is: "<<percentage<<endl;
     
     if(percentage >= 90){
     	cout<<"Your grade is A1";
	}
	else if (percentage >= 80){
		cout<<"Your grade is A";
	}
	else if (percentage >= 70){
		cout<<"Your grade is B+";
	}
	else if (percentage >= 60){
		cout<<"Your grade is B";
	}
	else if (percentage >= 50){
		cout<<"Your grade is C";
	}
	else if (percentage >= 40){
		cout<<"Your grade is D";
	}
	else if (percentage >= 30){
		cout<<"Your grade is E";
	}
	else if (percentage < 30){
		cout<<"Your grade is F";
	}
	else
	{
		cout<<"Invalid calculation!";
	}
     
     
     
     
}
