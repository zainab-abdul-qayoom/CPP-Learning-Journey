#include<iostream>
using namespace std;
int main()
{
   //combination
    // C = n!/r! * (n-r)! //factorial of n,r formula of combination or
                        // n=a ,r=b 
                        // a/(b*c)

    //     ex:

    //    6C^4= 6!/4!*(6-4)!
    //        = 6!/4!*2!
    //        = 6*5*4*3*2*1/4*3*2*1  * 2*1
    //        = 3*5
    //        = 15

    
	int n;
	cout<<"Enter n: ";
	cin>>n;

    int r;
	cout<<"Enter r: ";
	cin>>r;
	
	int a = 1;
	for(int i=1;i<=n;i++)
	{
		a = a * i;
	}

    int b = 1;
	for(int i=1;i<=r;i++)
	{
		b = b* i;
	}

    int c = 1;
	for(int i=1;i<=n-r;i++)
	{
		c = c* i;
	}
	
    cout<<a/(b*c);
}
