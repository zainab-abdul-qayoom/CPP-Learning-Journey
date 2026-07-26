#include<iostream>
using namespace std;
int main()
{
	float a = 5/2; //compiler takes 5 as a int and 2 as int : so ans will be 2
	cout<<"A = "<<a<<endl;// bec int/int = int value
	
	// by default compuetr 1st solve the arithmatic operation then store the result in datatype.
	
	//solution:
	//the ans should be 2.5 because we write float datatype.
	//But
	//The ans will be 2.
	//  why?
	// because:
	// compiler works as:
//	1. compiler take 5 as a integer and same as 2 take as a integer by default.
//	2. then perform arithmatic operation 
//	3. the ans of 5/2 will be in int by default
//	4. now the compiler stores the ans as a integer which is 2 in float 
//	5. so the output will be 2.

//   but how? if we write 5.0 instead of 0.
   float b = 5.0/2; //compiler takes 5.0 as a float and 2 as int : so ans will be 2.5
   cout<<"B = "<<b<<endl;  // bec float/int = float value
   
   
   
   float c = 5/2.0; //compiler takes 2.0 as a float so ans will be 2.5
   cout<<"C = "<<c<<endl; // bec int/float = float value
   
   float d = 5.0/2.0; //compiler takes 5.0 and 2.0 as a float so ans will be 2.5
   cout<<"D = "<<d;  // bec float/float = float value
   
   return 0;
}
