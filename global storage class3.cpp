#include<iostream>
using namespace std;
//int a=10;
//void fun()
//
//{
//	cout<<a<<endl;
//	
//}
//int main()
//{
//	fun();
//}
//we can't use local storage class in globle but we can use globle storage class in local here below explanation:
int a=10;
void fun()
{
	cout<<a<<endl;
	
}
int main()
{

int b=20;
cout<<a<<ends<<b;
return 0;
}
