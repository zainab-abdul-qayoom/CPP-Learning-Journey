#include<iostream>
using namespace std;
int main()
{
//	Ques: If the age of Aisha, Nisha and Talha are input through the keyboard, write the program to determine
//	      the youngest of the three. 

int N,T,A;
cout<<"Enter the age of Nisha: ";
cin>>N;
cout<<"Enter the age of Talha: ";
cin>>T;
cout<<"Enter the age of Aisha: ";
cin>>A;

if(N<T)
{
	if(N<A)
	{
		cout<<"Nisha is the youngest";
		
	}
	else
		{
			cout<<"Aisha is the youngest";
		}
	}
	
	else
	{
		if(T<A)
		{
			cout<<"Talha is the youngest";
		}
		
		else
		{
			cout<<"Aisha is the youngest";
		}
	
}
}
