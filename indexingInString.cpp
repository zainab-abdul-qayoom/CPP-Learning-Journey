#include<iostream>
using namespace std;
int main()
{
    string s = "Zainab Gondal";
   // cout<<s[0];  //mean 0 is a Z character

    //we can also update our string character like:
    cout<<s<<endl;
    s[0] = 'N';
    s[2] = 'j';
    cout<<s<<endl;
}