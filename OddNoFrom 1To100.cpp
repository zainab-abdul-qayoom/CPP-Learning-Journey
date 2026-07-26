#include<iostream>
using namespace std;
int main()
{
//	Ques: Print odd numbers from 1 to 100 using continue.
	
	for(int i=1;i<=100;i++)
	{
		if(i % 2 ==0 ) continue;
		cout<<i<<" ";
	}
	
}
