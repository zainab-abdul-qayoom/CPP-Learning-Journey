#include<iostream>
using namespace std;
class A{
	int a,b;       //they are private
	public: 
	A()      //Default constructor
	{
		a=10; b=20;
		cout<<a<<ends<<b;

	}
};
int main()
{
	A o;
	return 0;
}
