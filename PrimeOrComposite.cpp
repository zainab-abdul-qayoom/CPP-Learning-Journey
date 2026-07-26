#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number: ";
	cin>>n;
	
	bool flag = true;   //true mean prime
	
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			// false mean no. in output is composite but not prime
			flag = false;   //false mean composite
			break;  //to get out of the loop
		}
	}
	if(n==1)
	
		cout<<"neither prime nor composite";
		
      else if(flag==true)
      {
      	cout<<"Prime";
	 }
	 else
	 cout<<"composite";
	
	
}

