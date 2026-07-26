#include<iostream>
using namespace std;
void pyramidPattern10(int n)
{
	int x=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<x++<<" ";
		
		cout<<endl;
	}
}
int main()
{
	int num ;
	cout<<"Enter number of levels of the pattern :"<<endl;
	cin>>num;
	pyramidPattern10(num);
	cout<<endl;
}
