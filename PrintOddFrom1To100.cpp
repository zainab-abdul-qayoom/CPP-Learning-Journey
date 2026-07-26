#include<iostream>
using namespace std;
int main()
{
	//1st method
//100 times loop work
	for(int i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<" ";
		}
	}
	
	//	loop work 100 times in 1st method so for that we use 2nd method.
//	2nd method
// 50 times loops work
 for(int j=1;j<=100;j=j+2)
 {
 	cout<<j<<" ";
 }
	
}
