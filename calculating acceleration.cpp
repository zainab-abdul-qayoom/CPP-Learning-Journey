#include<iostream>
using namespace std;
int main()
{
	float acc,vf,vi,time;
	cout<<"Calculating acceleration: "<<endl;
	cout<<"========================="<<endl;
	cout<<"Enter the final velocity of an object: ";
	cin>>vf;
	cout<<"Enter the initial velocity of an object: ";
	cin>>vi;
	cout<<"Enter the time of an object: ";
	cin>>time;
	acc = (vf-vi)/time;
	cout<<"The acceleration of an object is: "<<acc;
	return 0;
	
}
