#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    // ques: input a string of even length and reverse the first half of the string.
    string s = "zainab";
    cout<<s<<endl;
    int n = s.length(); //n = 6

    // reverse of 1st half 

    // int i = 0;
    // int j = n/2 -1;
    // while(i<j)
    // {
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }

    // another short one method is:

    //reverse(s.begin(),s.begin()+3);
    // or
    reverse(s.begin(),s.begin()+n/2);

    cout<<s<<endl;

}