#include<iostream>
using namespace std;
int main()
{
//	ques: WAP to print sum of all the even digits of a given number
  
  int n;
  cout<<"Enter number: ";
  cin>>n;
  int sum=0;
  int ld;
  
  	
  while(n>0)
  {
  
  ld=n%10;
  if(ld%2==0)
  {
  	
  	sum=ld+sum;
  
  
}

n=n/10;
}
  cout<<"The sum of all even numbers is: "<<sum;
  
  }
  
  
  // n%10: Gets last digit
  // n/10: remove last digit
  // ld%2==0: checks if digit is even
  // loop process digits from right to left
