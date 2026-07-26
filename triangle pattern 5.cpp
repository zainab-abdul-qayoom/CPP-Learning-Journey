#include<iostream>
using namespace std;
void pyramidPattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j>0;j++)
    	{
    		cout<<i;
	    }
	    cout<<endl;
	    }	
}
int main()
{
	int num = 5;
 pyramidPattern5(num);
 cout<<endl;	
}
