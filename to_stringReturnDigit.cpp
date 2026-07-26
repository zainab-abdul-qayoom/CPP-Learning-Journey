#include<iostream>
using namespace std;
int main()
{
    //ques: Return the total number of digits in a number without using any loop.
    //hint: Try using inbuilt to_string() function

    int x = 1234872666;
    string s = to_string(x);
    cout<<s.length();
}