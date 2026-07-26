#include<iostream>
using namespace std;
int main()
{
	float area,bidth,height;
	cout<<"calculate the Area of Triangle: "<<endl;
	cout<<"==============================="<<endl;
	cout<<"Enter the bidth of the triangle: ";
	cin>>bidth;
	cout<<"Enter the height of the triangle: ";
	cin>>height;
	area=0.5*bidth*height;
	cout<<"The Area of the triangle is: "<<area;
	return 0;
	
}
