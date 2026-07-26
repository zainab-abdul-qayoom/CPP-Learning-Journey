#include <iostream>
using namespace std;
int power(int a, int b)
{
    if(b==0 ) return 1;
    if(b%2==0)
    {
        return power(a,b/2) * power(a,b/2); //for even exponent
    }
    else{
        return a * power(a,b-1);   //odd exponent
    }
      
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