#include<iostream>
using namespace std;
int main()
{
	float celsius;
	float fahrenheit;
	cout<<"Calsius to Fahrenheit Conversion"<<endl;
	cout<<"Input the temperature in celsius";
	cin>>celsius;
	cout<<"The Temperature in celsius: "<<celsius<<endl;
	cout<<"The temperature in fahrenheit: ";
	int result=fahrenheit  = ( celsius* 9/5) +32;
	cout<<result;
}
