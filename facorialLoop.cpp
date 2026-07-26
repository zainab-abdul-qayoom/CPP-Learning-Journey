#include<iostream>
using namespace std;
int main()
{
//	Ques: Print the factorial of a given number 'n'
	int n;
	cout<<"Enter number: ";
	cin>>n;
	
	int product = 1;
	for(int i=1;i<=n;i++)
	{
		product = product * i;
	}
	cout<<product;
}
