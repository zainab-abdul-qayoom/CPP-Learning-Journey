#include<iostream>
using namespace std;
int main()
{
//Ques: Print the number of 19.
//method 1
       cout<<"Method 1: "<<endl;	
	int n = 19;
	for(int i=1;i<=10;i++)
	{
		cout<<n*i<<endl;
	}
//method 2
  cout<<"Method 2: "<<endl;
     for(int j=19;j<=190;j++)
     {
     	if(j%19==0)
     	cout<<j<<endl;
	}
}
