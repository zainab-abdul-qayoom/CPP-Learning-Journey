#include<iostream>
#include<math.h>
using namespace std;
void pytha()
{
	int a,b;
	double c;
	cout<<"\n \t For pythagorean theorem: ";
	cout<<"\n \t ======================== ";
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"\n \t Enter the value of b: ";
	cin>>b;
	c= sqrt((a*a) + (b*b));
	cout<<"\n \t The c(hypotenuse) is equal to: "<<c;
	
}
int main()
{
	pytha();
	return 0;
}
