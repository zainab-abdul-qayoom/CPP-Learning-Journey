#include<iostream>
using namespace std;
int main()
{
//	Ques: WAP to print reverse of a given number.


    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    int r=0;
    while(n>0)
    {     //suppose u entered 1234
     int ld=n%10; // ld= 1234%10 = 4 , ld=123%10=3 ,ld=12%10=2  ,ld=1%10=1 ld=1
    	r=r*10;      // r= 0*10 = 0     , r=4*10=40   ,r=43*10=430 ,r=432*10= r=4320
    	r=r+ld;      // r= 0+4 = 4      , r=40+3=43   ,r=430+2=432 ,r=4320+1= r=4321
    	n=n/10;      // n=1234/10 = 123 , n=123/10=12 ,n=12/10=1   ,n=1/10=0  n=0
    }
    cout<<r;  // r=4  //r=43  //r=432  //4321 print bec n=0 socondition false while (n>0)
}
