#include<iostream>
using namespace std;
template <class A>  //in class template only 1 type of datatype value we can print.
class print
{
	public:
		print (A x, A y)
		{
			cout<<x<<ends<<y<<endl;
		}
		
};
int main()
{
//	print<int>  	obj(100,200);
//     print <char>   obj('r', 't');
      print <double>   obj(45.4,367.8);
	return 0;
}
