#include<iostream>
using namespace std;
int main()
{
//	Ques: Display this GP (geometric progress) - 1, 2, 4, 8, 16 ,32 ....upto 'n' terms
//                    1 no differnce between 1 and 2 ,   2, 4,  8, 16......
//                    multiply by 2 sol:
// 1,2,4,8,16,32.......
//     int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	int a = 1;
//	
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a<<" ";
//		a = a*2;
//	}
//	
	
// 5,15,45,....
//
//	int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	int a = 5;
//	
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a<<" ";
//		a = a*3;
//	}


//Ques: Display this GP - 3,12,48,..... upto 'n' terms.

     int n;
	cout<<"Enter n: ";
	cin>>n;
	int a = 3;
	
	for(int i=1;i<=n;i++)
	{
		cout<<a<<" ";
		a = a*4;
	}
	
	
}
