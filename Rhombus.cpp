#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1;i<=n;i++) //rows loop
    {


         for(int j=1;j<=n-i;j++) //spaces loop
        {
            cout<<"  ";
        }


        for(int j=1;j<=n;j++) //stars loop
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
