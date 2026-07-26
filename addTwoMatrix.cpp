#include<iostream>
using namespace std;
int main()
{
    int a[2][2] = {{9,5},{4,5}};
    int b[2][2] = {{3,9},{6,1}};
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout<< c[i][j]<<" ";
        }
        cout<<endl;
    }
}