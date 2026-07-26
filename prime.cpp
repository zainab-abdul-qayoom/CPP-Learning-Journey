#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number";
	 cin>>n;
//	 bool isPrime = true;
	 for(int i=2;i<=n-1;i++)
	{
//		cout<<n;
		if(n % i!=0)
		{
			cout<<"Prime"<<endl;
//			isPrime = false;
			break;
		}
	else{
			cout<<"Not prime"<<endl;
			break;
		
		}
		
}
}
