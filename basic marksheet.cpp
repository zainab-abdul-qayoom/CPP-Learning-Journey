#include<iostream>
using namespace std;
int main(){
	int Eng;
	cout<<"Enter Your English Marks: ";
	cin>>Eng;
	int Urdu;
	cout<<"Enter Your Urdu Marks: ";
	cin>>Urdu;
	int Math;
	cout<<"Enter Your Math Marks: ";
	cin>>Math;
	
     int totalMarks = 300;
     int obtainedMarks = Eng + Urdu + Math;
     int Percentage = obtainedMarks*100/totalMarks;
     cout<<"Your % is: "<<Percentage;
	
}
