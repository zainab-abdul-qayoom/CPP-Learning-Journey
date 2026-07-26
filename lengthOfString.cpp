#include<iostream>
using namespace std;
int main()
{
    string s = "zainab";
    cout<<s.length()<<endl; //or
    cout<<s.size()<<endl;

   // problem: when i put my cursor in "zainab" so why the size of string shows 7? instead it has 6 char?
   //the ans is that in the last there is special null character which is briten by default
   // '\0' so it is considered 1 character so total size will be shown 7.
   //  '\0' its ASCAI value is zero and it will never print normally but show like in this way
    char ch = '\0';
    cout<<(int)ch;
    // the another question is why it is appear is it important or what? simply what is it work?
    // the ans is that it tells that now the string is ended.

}