#include<iostream>
using namespace std;
int main()
{
//	Ques: Find the sum from 1 to n.
  
//  int n;
//  cout<<"Enter number: ";
//  cin>>n;
//  
//  int sum;
//  sum = n*(n-1)/2;
//  cout<<"The sum from 1 to "<<n<<" is: "<<sum;
//  
//  or
  
  int n;
  cout<<"Enter number: ";
  cin>>n;
  
  int sum;
  for(int i=1;i<=n;i++)
  {
  	sum = sum+i;
  }
  cout<<"The sum from 1 to "<<n<<" is: "<<sum;
	
}

