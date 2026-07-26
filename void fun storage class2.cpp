#include<iostream>
using namespace std;
void fun() //definition
{
	auto int a=10;  //auto value ends when we left the block.  bec it work till the block.
	static int b=10;  //but static value doesnot ends bec its work till the program.
	cout<<a<<ends<<b<<endl;
	++a; ++b;
}

int main()
{
	fun();  //function calling
	fun();
	fun();
		fun();
			fun();
				fun();
	return 0;
}
