#include<iostream>
using namespace std;
class A
{
	public:
		A(){
			cout<<"Learn coding";
		}
};
int main()
{
	A obj = A();  //constructor is used to initialized the object mean like in this line we write A() as it write in line 6 as well.
	//so this A() assign or intialized the object to show us the output.
	//there are 3 types of constructor
	// 1. Default
	// 2. Parametrized
	// 3. copy
	return 0;
}
