#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,6,7,34,9,230,2,8,3,60};
    int n = sizeof(arr) / 4; 

    int mn = arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]<mn) mn = arr[i];
    // or
    // mn = min(mn,arr[i]);


    }
    cout<<mn;

}