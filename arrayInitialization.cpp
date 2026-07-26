#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {4,1,2,6,8};  //declaration + initialization
    for(int i=0;i<=4;i++)
    {
        arr[0] = 10;    //for update the 0 element value
        cout<<arr[i]<<" ";
    }
}