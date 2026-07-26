#include<iostream>
using namespace std;
int main()
{
    // for add a string agin in string we used append function intead of append
    //  we can use + operator also
     string stri = "zainab";
    cout<<stri<<" "<<stri.length()<<endl;
    // stri = stri + " gondal";
    //also
    stri = " gondal" + stri;
    cout<<stri<<" "<<stri.length()<<endl;
}