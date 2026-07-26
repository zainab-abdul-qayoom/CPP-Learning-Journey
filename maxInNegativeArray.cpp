#include<iostream>
using namespace std;
int main()
{
    int arr[] = {-10,-2,-3,-4,-5};
    int n = sizeof(arr) / 4; 

   // int mx = -1; //-1 will be printed bec -1 is greater than all
                 //but its not include in array? in array
                 //-2 is the maximum so for that we use:
     int mx= INT8_MIN
     ;
    for(int i=1;i<n;i++)
    {
    //    if(arr[i]>mx) mx = arr[i];
    // or
    mx = max(mx,arr[i]);


    }
    cout<<mx;

}