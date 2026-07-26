#include<iostream>
using namespace std;
int main()
{
	int a = 5, b = 4, c = 3;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"Largest is 5";
		}
		else{
			cout<<"Largest is %d",c;
		}
	}
	else{
		if(b>c)
		{
			cout<<"Largest is %d",b;
		}
		else{
			cout<<"Largest is %d",c;
		}
	
      }
}
