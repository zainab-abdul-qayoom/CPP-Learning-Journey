#include<iostream>
using namespace std;
int main()
{
	float force,acc,mass;
	cout<<"Calculating force according to Newton second law of motion: "<<endl;
	cout<<"==========================================================="<<endl;
	cout<<"Enter the mass of an object: ";
	cin>>mass;
	cout<<"Enter the acceleration of an object: ";
	cin>>acc;
	force = mass*acc;
	cout<<"The force of an object is: "<<force;
	return 0;
	
}
