#include<iostream>
using namespace std;
int main()
{
	int a = !(!(!(!(!(!(5>4 && 3>5 || 4>8 || 7==8))))) ) ;
	cout<<a;
}
