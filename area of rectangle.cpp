#include<iostream>
using namespace std;
void area()
{
	int width,length;
	cout<<"\n \t To calculate Area of Rectangle: ";
	cout<<"\n \t =============================== "<<endl;
	cout<<"\n \t Enter the length of reactangle: ";
	cin>>length;
	cout<<"\n \tEnter the width of reactangle: ";
	cin>>width;
	int ara=length*width;
	cout<<"\n \t The area of a rectangle is: "<<ara;
}
int main()
{
	area();
	return 0;
}
