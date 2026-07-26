#include<iostream>
using namespace std;
int main()
{
//  Ques: Given the length and breadth of a rectangle, write program to find whether the area of
//        the rectangle is  greater than its perimeter. 
   int l;
   cout<<"Enter the length of a rectangle: ";
   cin>>l;
   
   int b;
   cout<<"Enter the breadth of a rectangle: ";
   cin>>b;
   
   int a = l*b;
   cout<<"The area of a rectangle is "<<a<<endl;
   
   int p = 2*(l*b);
   cout<<"The perimeter of a rectangle is "<<p<<endl;
   
   
}
