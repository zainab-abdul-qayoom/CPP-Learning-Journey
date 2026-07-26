#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,5,2,5};
    int pro = 1;
    for(int i=0;i<=3;i++)
    {
        pro *= arr[i];
    }
    cout<<pro;
}