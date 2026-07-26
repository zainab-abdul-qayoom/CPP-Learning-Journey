#include<iostream>
using namespace std;
int main()
{
    int a[]={12,6,7,34,9,230,2,8};
     int n = sizeof(a)/4;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        
    }
   //reverse without using extra array swapping
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp=a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
       
        cout<<a[i]<<" ";
    }
}
