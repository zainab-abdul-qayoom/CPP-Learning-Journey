#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b;
	public:
		void input()
		{
			cout<<"Enter any two numbers ";
			cin>>a>>b;
		}
};
class B : public A
{
	int c;
	public:
		void add()
		{
			c=a+b;
			cout<<"Addition "<<c<<endl;
		}
		void sub()
		{
			c=a-b;
			cout<<"Substraction "<<c<<endl;
		}
		
};
class C : public B
{
	int c;
	public:
		void multi()
		{
			c=a*b;
			cout<<"Multipliction "<<c<<endl;
		}
		
			void div()
		{
			c=a/b;
			cout<<"Division "<<c;
		}
};
int main()
{
	C obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.multi();
	obj.div();
	
	return 0;
}
