#include<iostream>
using namespace std;
int factorial(int n)
{
	
	
	
	
	int fact =1;
	for(int i=1;i<=n;i++)
	{
		//if user put 4 then the ans will be 24 how?
		fact *=i;  
//		 1. fact = 1, i = 1   fact*=i  fact=1*1 =1    fact 1
//		             2. fact 1 ,i=2               fact= 1*2 = 3  fact=3
//		             3 .fact 3, i=3                 fact=3*3=6     fact=6
//				   4. fact=6 i=4                   fact=6*4       fact=24..... 
	}
	return fact;
}

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	int result = factorial(num);
	cout<<"Factorial is: "<<result;
	return 0;
}
