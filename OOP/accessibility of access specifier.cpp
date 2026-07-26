#include<iostream>
using namespace std;
class A
{
//private: 
//int a;
//protected:
//int b;
public:
int c;	
};
int main()
{
  A obj;
//  obj.a=10;	
//  obj.b=20;	
  obj.c=30;
//  cout<<obj.a<<endl;  //not allowed and give error bec int a above is private
//  cout<<obj.b<<endl;	//ot allowed and give error bec int b above is protected
  cout<<obj.c<<endl;	//allowed bec int c is public
}
