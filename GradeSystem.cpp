#include<iostream>
using namespace std;
int main()
{
//	Ques: Take input percentage of a student and print the Grade according to marks:
//		1. 81-100 Very good
//		2. 61-80 Good
//		3. 41-60 Average
//		4. <=40 Fail
   
   int per;
   cout<<"Enter your percentage: ";
   cin>>per;
   
   if(per>=81 && per<=100)
   {
   	cout<<"very Good";
   }
   
   else if(per>=61 && per<=80 )
   {
   	cout<<"Good";
   }
   
   else if(per>=41 && per<=60)
   {
   	cout<<"Average";
   }
   
   else
   {
   	cout<<"Fail";
   }
}
