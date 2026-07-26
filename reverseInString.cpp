#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    // we will use reverse() function to reverse the zainab
   // string s = "zainab";
    // cout<<s<<endl;

     // reverse the string
    // int n = s.length();
    // int i = 0;
    // int j = n-1;
    // while(i<j)
    // {
    //    int temp = s[i];
    //    s[i] = s[j];
    //    s[j] = temp;
    //    i++;
    //    j--;
    // }

   // cout<<s<<endl;

    // this method is just like the array which is very long hence the string has some built-in
    // functions in it like reverse() which will reverse our string very easily
    // so:

    string s = "zainab";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;


}