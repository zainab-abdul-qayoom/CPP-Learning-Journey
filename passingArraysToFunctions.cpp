#include<iostream>
using namespace std;
void change(int arr[])  //arrays me function by reference jaty hain. by value nh jaty integers ki trha.
{
    arr[0] = 9;
}

int main()
{
     int arr[3] = {1,2,3};
     for(int i=0;i<=2;i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     //arr[0] = 9;      // update i can do this same updation wit the help of function so
     change(arr);
     for(int i=0;i<=2;i++)
     {
        cout<<arr[i]<<" ";
     }
}