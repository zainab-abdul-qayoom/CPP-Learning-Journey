#include<iostream>
using namespace std;
void sum(int a, int b)   //formal parameters
{
    cout<<a+b;
}
int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;

     int b;
    cout<<"Enter second number: ";
    cin>>b;

    sum(a,b);  //actual parameters/values
}