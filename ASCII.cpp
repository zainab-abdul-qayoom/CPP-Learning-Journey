//            ASCII Values:
//            	Every character has an ascar or ineteger value.
//            	
//            	for getting the value of ascar we can use TypeCasting(any character converted into integer).
//            	like:
//            		
//            	small a,b,c ascar values as a character are: 
//            	
//            	a ==> ascar value of a is 97
//            	b ==> ascar value of b is 98
//            	c ==> ascar value of c is 99
//            	d ==> ascar value of d is 100
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	z ==> ascar value of z is 122
//            	
//            	same as:
//            	
//            	Capital A,B,C ascar values as a character are:
//            	
//            	A ==> ascar value of A is 65
//            	B ==> ascar value of B is 66
//            	C ==> ascar value of C is 67
//            	D ==> ascar value of D is 68
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	.     .                    .
//            	Z ==> ascar value of Z is 90
//            	
//            	same as:
//            		
//            	the value of character as a '1' are:
//            		
//            	'0' ascar value is 48
//            	'1' ascar value is 49
//            	'2' ascar value is 50
//            	'3' ascar value is 51
//            	'4' ascar value is 52
//            	'5' ascar value is 53
//            	'6' ascar value is 54
//            	'7' ascar value is 55
//            	'8' ascar value is 56
//            	'9' ascar value is 57
//   for example:

#include<iostream>
using namespace std;
int main()
{
           // for converting character into integer.
  char ch;
  cout<<"Enter character to convert into ASCII: ";
  cin>>ch;
  
  cout<<"The ASCII value of " <<ch<<" is: "<<(int)ch;	
  return 0;
}

//{
           // for converting integer into character.
//     int x;
//     cout<<"Enter integer to convert into ASCII: ";
//     cin>>x;
//     
//     cout<<"The ASCII value of " <<x<<" is: "<<(char)x;
//     return 0;
     	
//}
   
   
             
