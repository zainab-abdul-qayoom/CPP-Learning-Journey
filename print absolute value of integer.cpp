#include<iostream>
using namespace std;
int main()
{
	// Take integer input and print the absolute value of that integer
//	ex:
//		if 5 so ans is 5
//		if -5 so ans is 5


	int n;
	cout<<"Enter number: ";
	cin>>n;
//	
//	if(n>=0)
//	{
//		cout<<n;
//	}
//	else{
//		cout<<-n;
//	}
  //if u want to change n into its absolute value.
  if(n<0) n=-n;
  cout<<n;
}
