#include<iostream>
using namespace std;
template <class A> //function template accepts all type of datatypes like
                     //int,float,string etc.
void print(A x, A y)
{
  cout<<x<<ends<<y<<endl;	
}

int main()
{
   print(10,20);
   print('a', 'b');
   print(15.3 ,676.7);
   print("zainab", "wajeeha");
   return 0;	
}
