#include<iostream>
using namespace std;
int main()
{
	float radius;
	float height ;
	float volume;
	const float pi = 3.14;
	cout<<"Calculate the Volume of a cylinder"<<endl;
	cout<<"Input the radius of the cylinder";
	cin>>radius;
	
	cout<<"Input the height of the cylinder";
	cin>>height;
	
	
	
	 
	volume=radius*radius*pi*height;
	cout<<"The volume of a cube is: "<<volume<<endl;
	return 0;
	
}
