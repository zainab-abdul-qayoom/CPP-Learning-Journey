// Loop : Repeat the set of instructions
// loop : also known as iteration.
//four types : 1. For Loop 	2. While Loop		3. Do While		4. Nested Loop
//1. For loop: Syntax: for(Init; Condition; Incre/Decre){
//	Set of instructions;
//}
//

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Counting num:";
	cin>>num;
	for( int a = 0; a<=num; a++ ){			
		cout<<"*"<<endl;
	}
	cout<<"end";
}


//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int table;
//	cout<<"Enter Table num:";
//	cin>>table;
//	for( int a = 1; a<=10; a++ ){			
//		cout<<a*table<<endl;		//expression
//	}
//	cout<<"end";
//}
