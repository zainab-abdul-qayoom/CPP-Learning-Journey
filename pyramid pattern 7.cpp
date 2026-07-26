#include<iostream>
using namespace std;
void pyramidpattern7(int n)
{
	
	//output:
//	         1
//	       2 2
//	     3 3 3
//	  4 4 4  4
//	 5 5 5 5 5
	for(int i=1;i<=n;i++)   // i=1 1<=5  
	{
		for(int k=n-i;k>0;k--)   //k=5-1 k=4 4>0 print space then k = 3 the space .......
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)  //j=1  1<=1  1<=2  2<=2
		cout<<i;     //print 1              print 2  print 2
		cout<<endl;
		
	}
	
}
int main()
{
	int num=5;
	pyramidpattern7(num);
	cout<<endl;
	
}
