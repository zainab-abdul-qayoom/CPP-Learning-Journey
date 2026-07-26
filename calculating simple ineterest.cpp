#include<iostream>
using namespace std;
int main()
{
	//calculating simple interest
	//formula is: Simple interest = principal * rate * time / 100;
	//               SI = (p*r*t)/100
	
	float p = 540;
	float r = 32;
	float t = 3;
	float si = (p*r*t)/100;
	cout<<"The SI is: "<<si;
	return 0;
}
