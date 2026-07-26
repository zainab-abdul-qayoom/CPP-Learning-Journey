#include<iostream>
using namespace std;
int main()
{
//	cout<<"\t ----------------"<<endl;
//	cout<<"\t a              b"<<endl;
//	cout<<"\t ----------------"<<endl;
//	int i=1,j=5;
//	while(i<=5,j>=1){
//		cout<<"\t"<<i<<"               "<<j<<endl;
//		i++,j--;}
//		cout<<"\t------------------";

cout<<"\t -------------------"<<endl;
cout<<"\t num             sum"<<endl;
cout<<"\t -------------------"<<endl;
int i=1,j=0;
while(i<=5){
	j = j+i;  //j=0 i=1   j=1.
	          //j=1 i=2   j=3.
	          //j=3 i=3   j=6.
	          //j=6 i=4   j=10.
	          //j=10 i=5  j=15.
	cout<<"\t"<<i<<"\t \t "<<j<<endl;
	i++;
}
cout<<"\t -------------------"<<endl;
	

			
	}


