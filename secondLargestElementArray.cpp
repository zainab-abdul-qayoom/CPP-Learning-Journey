#include<iostream>
using namespace std;
int main()
{
    int arr[]={-10,-2,-3,-4,-5};
    int n=sizeof(arr)/4;
    int mx= INT_FAST16_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
    }

    int secMx = INT16_MIN;
    for(int i=0;i<n;i++)
    {

        if(arr[i] != mx)  secMx = max(secMx,arr[i]);
    }
    cout<<secMx;
}