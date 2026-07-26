#include<iostream>
using namespace std;
int main()
{
//	Ques: WAP to print all the ASCII values and their equivalent characters of 26 alphabets 
//	using a while loop.

   char ch = 'A';  //start from A
   while(ch <= 'Z') //Until Z
   {
   	cout<<ch<<" = "<<int(ch)<<endl;
   	ch++;  //Move to the next character
   }
   return 0;
}
