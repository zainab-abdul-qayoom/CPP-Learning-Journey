#include<iostream>
using namespace std;
int main()
{
	cout<< ((10>5) && (20<5))<<endl;    //false=0  //and
	cout<< ((10>=5) || (20<=5))<<endl;   //True=1  //or
	cout<< ((10!=5) || (20==5))<<endl;   //True=1
	cout<< !(20>10);            //false=0 //not
	return 0;
}
