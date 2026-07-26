#include<iostream>
using namespace std;
int main()
{
    //buit-In functtions in string type push_back which is used to add a character in string
    string s = "zainab";
    cout<<s<<endl;
    s.push_back('a');
    cout<<s<<endl;
     s.push_back('g');
    cout<<s<<endl;

    // the another function is pop_back which is used to remove a character in string
    string st = "zainab";
    cout<<st<<endl;
    st.pop_back();
    cout<<st<<endl;
    st.pop_back();
    cout<<st<<endl;

    // another one is append which is used to add a string in a given string
    string str = "zainab";
    cout<<str<<endl;
    str.append(" gondal");
    cout<<str<<endl;
   
    //the next one is clear function which is used to clear all string.
    string stri = "zainab";
    cout<<stri<<" "<<stri.length()<<endl;
    stri.clear();
    cout<<stri<<" "<<stri.length()<<endl;
    
}