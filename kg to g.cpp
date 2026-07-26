#include<iostream>
using namespace std;
void kilo()
{
	int kg;
	cout<<"\n \t Conversion from kg to g: ";
	cout<<"\n \t ======================== ";
	cout<<"Enter the value in kg: ";
	cin>>kg;
	int gram = kg*1000;
	cout<<"\n \t The value in gram is: "<<gram;
}
int main()
{
	kilo();
	return 0;
}
