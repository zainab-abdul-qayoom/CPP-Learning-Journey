#include<iostream>
using namespace std;
void pyramidPattern8(int n)
{
	for(int i=n;i>=1;i--)  
	{
		for(int k=n-i;k>0;k--)
		cout<<" ";
        
		
		for(int j=1;j<=i;j++)
		{
			cout<<n-i+1;
		
		}
			cout<<endl;
	}
}
int main()
{
	int num = 5;
	pyramidPattern8(num);
	cout<<endl;
}
