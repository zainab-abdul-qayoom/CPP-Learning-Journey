#include<iostream>
using namespace std;
int main()
{
	float r;
	cout<<"Enter the radius of a sphere in cm: ";
	cin>>r;
	
	float volume = (4.0/3.0) * 3.14 * r*r*r ;
	cout<<"The volume of a sphere is: "<<volume<<" cm\u00B3";
	return 0;
}
