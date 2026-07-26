#include<iostream>
using namespace std;
int a,b,c;
class A
{
	public:
		void input()
		{
			cout<<"Enter two numbers: "<<endl;
			cin>>a>>b;
		}
		void add()
		{
			
			c=a+b;
			cout<<"Addition "<<c<<endl;
		}
};
class B
{
	public:
	void sub()
	{
		c=a-b;
		cout<<"Substraction "<<c<<endl;
		}	
};
class C: public A, public B
{
	public:
	void multi()
{
    c=a*b;
    cout<<"Multiplication "<<c<<endl;
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
