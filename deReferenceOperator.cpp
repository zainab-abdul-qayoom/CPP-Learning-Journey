#include <iostream>
    using namespace std;
    int main()
    {
        int x = 12;
        int* p;
      p = &x;
      cout<<x<<endl;
      //or
      cout<<*p<<endl; //star or dereference operator
    //   now if i have x address so i can change the value of x
    //   using x address

    //   for changing the value of x
    *p = 23;  //x = 23
    cout<<x<<endl;

    //or
     x = 23;  //x = 23
    cout<<x<<endl;

    }