#include<iostream>
using namespace std;
int count = 0;
class A
{
	public:
		
		//constructor (memory allocated)
		
		A()
		{
			cout<<"object "<<++count<<" created"<<endl;
		}
		
		//destructor (memory de-allocated)
		
		~A()
		{
			cout<<"object "<<count--<<" deleted"<<endl;
		}
		
		
};
int main()
{
  A obj,obj2,obj3;	
}
