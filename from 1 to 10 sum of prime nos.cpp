#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter number: ";
	cin>>n;
	
	
	//n=10
	for(int i=1;i<=n;i++) //1<=10
	{
		int count = 0;
	for(int j=1;j<=i;j++){ //1<=1
		
		if(i%j==0) //1/1==0
	{
		count++; //1 not prime
	}  
	
	}
if(count==2)
{
	cout<<i<<" ";
	sum=sum+i;
}
	
		
}
cout<<"\nSum = "<<sum;
return 0;
}

