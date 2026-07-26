#include<iostream>
using namespace std;
int main()
{
	int distance,time;
	float speed;
	cout<<"Calculating Speed of an object: "<<endl;
	cout<<"==============================="<<endl;
	cout<<"Enter the distance of an object: ";
	cin>>distance;
	cout<<"Enter the time of an object: ";
	cin>>time;
	speed = distance / time;
	cout<<"The speed of the object is: "<<speed;
	return 0;
	
}
