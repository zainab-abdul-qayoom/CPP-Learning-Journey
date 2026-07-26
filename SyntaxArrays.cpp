#include <iostream>
using namespace std;
int main()
{
    // i have to store 5 integers -> 6,2,8,5,0
    int arr[5]; //declaration -> 5 daby ya variable ikathy bna de ga 5 variable ki need nh hogi bnany ki
              // ak sath 5 daby bna de ga in 5ho dabo ka naam x hoga
              // since abhi tk sirf daby ya variables bny hain value assign nh hwi so for that

 //   1st easy method using Indexing 
      // index always start from 0 
    //   so for 5 students arrays values are 0,1,2,3,4

    // for store the value of 1st element
    //x[0] = 6 //initializing /updation of array 1st element it mean is ke pehly variable me 4 value store hogi
    //  in general we can do any name of array but often we use a or arr or nums
     
    // arr[0] = 6;
    // arr[1] = 2;
    // arr[2] = 8;
    // arr[3] = 5;
    // arr[4] = 0;

    //if i want to get input from user so:

    cout<<"Enter array elements : ";
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
    arr[0] = 100;  //updte
    cout<<endl;

    // cout<<arr[ 0]<<" ";
    // cout<<arr[ 1]<<" ";
    // cout<<arr[ 2]<<" ";
    //  cout<<arr[ 3]<<" ";
    //  cout<<arr[ 4]<<" ";

    for(int i=0;i<=4;i++)
    {
       cout<<arr[i]<<" ";    //if i want to print values multiplier by 2 so 
        // cout<<arr[i]*2<<" ";  
    }
    
   

}