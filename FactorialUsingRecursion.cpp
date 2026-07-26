#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<fact(n);

}

//dry run
// 5! = 5*4*3*2*1
// n! = n!*n-1*n-2*n-3....*1
// n! = n*(n-1)!
// fact(n) = n* fact(n-1)
// base case should be:
//       fact(1)=1
//       fact(0)=1
