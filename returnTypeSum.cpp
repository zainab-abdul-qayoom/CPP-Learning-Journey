#include<iostream>
using namespace std;
int sum(int a, int b)   //formal parameters
{
    return a+b;
}
int main()
{
    int a;
    cout<<"Enter first number: ";
    cin>>a;

     int b;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<sum(a,b);  //actual parameters/values
}