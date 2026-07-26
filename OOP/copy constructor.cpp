#include<iostream>
using namespace std;
class A
{  
  int x,y;
   //this is parametrized constructor
	public:
    A(int a, int b)
    {
    	x=a; y=b;
    	cout<<x<<ends<<y<<endl;
    }
    
    // now the copy construction begin
    
    A(A &ref)  //with the help of reference we copy the value of a and b and output will be twice time 10 and 20.
    {
    	x=ref.x;
    	y=ref.y;
    	cout<<x<<ends<<y;
    }
};
int main(){
	A obj(10,20);
	A obj2=obj;
	return 0;
}
