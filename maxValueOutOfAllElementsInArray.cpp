#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,6,7,34,9,230,2,8,3,6};
    int n = sizeof(arr) / 4; 

    int mx = arr[0];
    for(int i=1;i<n;i++)
    {
    //    if(arr[i]>mx) mx = arr[i];
    // or
    mx = max(mx,arr[i]);


    }
    cout<<mx;

}