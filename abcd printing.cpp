#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        
            cout<<(char)(j+97)<<" "; //type cast of int into char
            
        }
        cout<<endl;
    }
}