#include<iostream>
using namespace std;
int main()
{
//	Ques: Take positive integer input and tell if it is divisible by 5 or 3.
//    mean the table of 3 like 3,6,9,12,15,18,21,24,27,30.........and so on
    //               OR
//    the table of 5 like 5,10,15,20,25,30,35,40,45,50............and so on
//                   OR
//   both like 15,18,21.....and so on
	
	int n;
	cout<<"Enter number: ";
	cin>>n;
	
	if(n%5==0 || n%3==0)
	{
		cout<<n<<" is divisible by 5 or 3";
	}
	else
	{
		cout<<n<<" is not-divisible by 5 or 3";
	}
}
