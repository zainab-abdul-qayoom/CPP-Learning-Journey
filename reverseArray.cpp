#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,1,2,6,8};  //declaration + initialization 
    // if i do both intialization + declaration so i can write arr[]ainstead of arr[5]
    // but it is not valid in only delaration condition
    for(int i=4;i>=0;i--)
    {
        arr[0] = 10;    //for update the 0 element value
        cout<<arr[i]<<" ";
    }
}