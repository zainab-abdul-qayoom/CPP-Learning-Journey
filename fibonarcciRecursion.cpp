#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<fibo(n);

}

//dry run 
//    1+1=2 1+2=3 2+3=5 3+5=8 5+8=13 8+13=21....
//     1 1 2 3 5 8 13 21 34 55 89 ....
//  n= 1 2 3 4 5 6 7  8  9  10 11 ....
//  agar mujhe n = 8 de diya jaye to mera ans 21 ana chahiye
//    fibo(8) = fibo(7) + fibo(6)
    // fibo(n) = fibo(n-1) + fibo(n-2)
    // and base case should be:
    //            fibo(1) = 1
    //            fibo(2) = 1 