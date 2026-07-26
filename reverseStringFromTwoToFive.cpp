#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    // ques: input a string of length greater than 5 and reverse the substring from position 2 to 5
    // using inbuilt functions.

    string s = "zainab";
    cout<<s<<endl;
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
}