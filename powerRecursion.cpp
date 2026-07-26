#include <iostream>
using namespace std;
int power(int a, int b)
{
    if(b==0) return 1;
      return a* power(a,b-1);
}
int main()
{
    int a;
    cout<<"enter the base: ";
    cin>>a;

    
    int b;
    cout<<"enter the exponent: ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is " <<power(a, b);

}
//dry run
// a = 3;
// b = 4;
// 3^4 = 81;
// a^b = a*a^b-1
// pow(a,b)= a*pow(a,b-1)
// base case should be:
//    if power will be zero so it is equal to 1
//          b==0 return 1