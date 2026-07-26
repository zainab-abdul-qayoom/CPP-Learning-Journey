#include<iostream>
using namespace std;
int main()
{
//	Ques: WAP to print sum of digits of a given number
int n;
cout<<"Enter number: ";
cin>>n;

int sum=0;
int lastdigit;
while(n!=0)
{
	lastdigit=n%10;
	n/=10;                       //   n=n/10
	 sum+=lastdigit;            //sum=lastdigit+sum;
}
cout<<"The sum of these numbers is: "<<sum;


}




//lastdigit=n%10    1234%10=4,   123%10=3   12%10=2    1%10=1   last digit will be the ans

//algorithm:
//  ex:             lastdigit=n%10; 
//  	n = 1234      lastdigit=4        sum=lastdigit+sum;   sum=4 
//  	n=123         lastdigit=3        sum=3+4              sum=7
//  	n=12          lastdigit=2        sum=2+7              sum=9
//  	n=1           lastdigit=1        sum=1+9               sum=10
//  	n=0 finish....


