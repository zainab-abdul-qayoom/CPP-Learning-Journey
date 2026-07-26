#include<iostream>
using namespace std;
class A{
	public:
		A(int a, int b)   //parametrized constructor
		{
			cout<<a<<ends<<b;
		}
};
int main()
{
	A obj(100,200);
	return 0;
}
