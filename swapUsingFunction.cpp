  //pass by value & pass by reference


// #include<iostream>
// using namespace std;
// void swap(int x,int y)
// {
//     int temp = x;  // temp = 12
//      x = y;     //x=y 12=45 x=45 
//      y = temp;  //y=12
// }

// int main()
// {
//     int x = 12;  
//     int y = 45;
//     cout<<x<<" "<<y<<endl;
//     swap(x, y);
//      cout<<x<<" "<<y<<endl;

    //  why not swap x and y?
    //  bec in main int x and int y is limited when it goes to swap
    //  into uper void swap so the x and y value will be new but also
    //  now it shoud be swap ebec in new int x and int y the 
    //  values are 12 and 45 (new values)
     //in short int x and int y in main function pass the
     //values of x and y to void function but problem doesnot solved

    //  but it will print 
    //  12 45
    //  12 45?

    //  now here the concept of pass by reference will be used

    //pass by reference
    //  int &x and int&y used in void bec the int x and y in main
    //  function used again not new int x and y formed so its called 
    //  pass by reference where previously x and y value used

    #include<iostream>
using namespace std;
void swap(int &x,int &y) 
{
    int temp = x;  // temp = 12
     x = y;     //x=y 12=45 x=45 
     y = temp;  //y=12
}
int main()
{
    int x = 12;  
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(x, y);
     cout<<x<<" "<<y<<endl;
}