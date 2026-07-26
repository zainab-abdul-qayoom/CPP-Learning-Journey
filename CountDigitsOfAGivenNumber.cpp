#include<iostream>
using namespace std;
int main()
{
//	Ques: Write a program to count digits of a given number
int n;
cout<<"Enter number: ";
cin>>n;

int count = 0;
while(n>0 or n!=0)
{
	n=n/10;
	count++;
}
cout<<count;
}
