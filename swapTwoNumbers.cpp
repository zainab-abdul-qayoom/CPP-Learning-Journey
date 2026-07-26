#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int y=10;
    cout<<x<<" "<<y<<endl;

    //for swap if i do this..
    x=y;
    y=x;
     cout<<x<<" "<<y<<endl;


    // then it will be wrong bec the current value of x is 10 
    // so it will print 10 10
    //bec x 1st value is deleted permanently and current store
    // so for this problem solution we make 1 more variable which will be 
    // temporary and it will store x previous or original value

    // so the method 1 is to swip 2 numbers is:

    int a=5;
    int b=10;
    int temp = a;
    cout<<a<<" "<<b<<endl;

    //for swap if i do this..
    a=b;
    b=temp;
     cout<<a<<" "<<b<<endl;

     // method 2 without using extra mathematics
     int c = 2;
     int d = 6;
     c = c+d ;// 2+6=8
     d = c-d ; //8-6=2
     c = c-d; //8-2=6
 cout<<"c = "<<c<<" "<<"d = "<<d<<endl;

}