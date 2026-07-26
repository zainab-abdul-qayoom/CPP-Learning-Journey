#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,6,7,34,9,23,2,8,3,6};
    //cout<<sizeof(arr);  // 1 int takes 4 byte
  
    // for determine the size of elements in array
     int n = sizeof(arr) / 4; 

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<sum;

}