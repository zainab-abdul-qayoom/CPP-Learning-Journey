#include<iostream>
using namespace std;
int main()
{
	// do-while loop: ak baar to minimum run krta he.
	
	// 1 to 10
//	int i=1;
//	do
//	{
//		cout<<i<<" ";
//		i++;
//	}
//	while(i<=10);
	  // ak baar zaroor chaly ga bhaly condition true na ho
		int i=11;
	do
	{
		cout<<i<<" ";   //pehly print krta he
		i++;
	}
	while(i<=10);   // phr condition check
	
	// why? condition is not true then why it prnts 11
//	bec
//	   ye pehly print krta he baad me condition check krta he.
}
