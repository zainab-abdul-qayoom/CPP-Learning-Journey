#include<iostream>
using namespace std;
int main()
{
//	ques: Take positive integer input and tell if it dividible by 5 and 3.
// like 15 table is divisible by both 5 and 3
   int n;
   cout<<"Enter number: ";
   cin>>n;
   
//   if(n%5==0 and n%3==0)
//   {
//   	cout<<n<<" is divisible by 5 and 3";
//   }
   
   // or
   
   if(n%15==0)
   {
   	cout<<n<<" is divisible by 5 and 3";
   }
   else{
   	cout<<n<<" is not divisible by 5 and 3";
   }
}
