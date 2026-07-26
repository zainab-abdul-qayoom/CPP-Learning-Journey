#include<iostream>
using namespace std;
int main()
{
int num1,num2;
char opera;
cin>>num1;
cin>>opera;
cin>>num2;

if(opera=='+') cout<<num1+num2;
if(opera=='-') cout<<num1-num2;
if(opera=='*') cout<<num1*num2;
if(opera=='/') cout<<num1/num2;
 
}
