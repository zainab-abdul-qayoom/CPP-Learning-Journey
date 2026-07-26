#include<iostream>
using namespace std;
int main()
{
    //rectangle bnana he
    // rows --> m, cols --> 5
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;

    int n;
    cout<<"Enter number of columns: ";
    cin>>n;

    for(int i=1;i<=m;i++)  //rows = m
    {
        for(int j=1;j<=n;j++) //columns = n
        {
            cout<<"*  ";
        }
       cout<<endl;
    }

   
}