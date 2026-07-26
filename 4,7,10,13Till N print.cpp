#include<iostream>
using namespace std;
int main()
{
//	Ques: Display this AP - 4,7,10,13,16...upto 'n' terms.
              //method: 1
//sol: AP == a = a+(n-1)d
//           a = 4+(n-1)*3
//           a = 4+3n-3
//           a = 3n+1       
//	int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	
//	for(int i=4;i<=3*n+1;i=i+3)
//	{
//		cout<<i<<" ";
//	}
	
	// method: 2
	// using extra variable and keeping 'i' only for iteration.
	
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int a = 4;
	
	for(int i=1;i<=n;i++)
	{
		cout<<a<<" ";
		a = a+3; 
	}	
}
