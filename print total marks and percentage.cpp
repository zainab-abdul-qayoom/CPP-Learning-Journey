#include<iostream>
using namespace std;
int main(){
	float phy,chem,math,eng,urdu;
	cout<<"To calculate the total marks and percentage: "<<endl;
	cout<<"============================================"<<endl;
	cout<<"Enter the Following: "<<endl;
	cout<<"===================="<<endl;
	cout<<"Enter the physics marks here: ";
	cin>>phy;
	cout<<"Enter the chemistry marks here: ";
	cin>>chem;
	cout<<"Enter the math marks here: ";
	cin>>math;
	cout<<"Enter the English marks here: ";
	cin>>eng;
	cout<<"Enter the urdu marks here: ";
	cin>>urdu;
	
	float totalMarks=500;
	float obtainedMarks=phy+chem+math+eng+urdu;
	float percentage=(obtainedMarks *100) / totalMarks;
	cout<<"Total marks is: "<<obtainedMarks<<endl;
	cout<<"Percentage is: "<<percentage;
	return 0;}
