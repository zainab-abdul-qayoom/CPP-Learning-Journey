#include<iostream>
using namespace std;
void circle()
{
	int pi = 3.14, radius;
	cout<<"\n \t Enter the area of a circle: ";
	cout<<"\n \t =========================== ";
	cin>>radius;
	
	int mult= pi*radius*radius;
	cout<<"\n \t The are of the circle is: "<<mult;
	
}
int main()
{
	circle();
	return 0;
}
