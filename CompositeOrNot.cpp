#include<iostream>
using namespace std;
int main()
{
//	Ques: write a program to check if a number is composite or not.
//  if n has extra factor/factors except 1 and n then it is composite
//  if(n%i==0) ==> we found a factor
   
     int n;
     cout<<"Enter number: ";
     cin>>n;
     
     for(int i=2;i<=n/2;i++)  
     {
     	if(n%i==0)
     	{
     		cout<<"Composite";
     		break;
		}
		
     	
	}
	 
}
