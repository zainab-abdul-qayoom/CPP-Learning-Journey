//pointers:
    //   To store the address of any datatype we use pointers.
    //  We can Access or update or change the value of variable
   //  whose value stores is in the pointer using
   //  using de-reference or (star)* operator.
    #include <iostream>
    using namespace std;
    int main()
    {
        int x = 3;


        // now if want to store the address of x then i can use pointers 
        // in this way as the datatypes are very different types
        // like bool,char,str,int,void,float,double etc so pointers are also
        // have different types
    //  so
      int* p;
      p = &x;   //store the address of x in p.
        cout<<&x<<endl;
        cout<<p<<endl;
       //same address 
       
    //    reverse mean we have address and want to know
    //    variable value so: we can use star operator
         cout<<x<<endl;
         //or
         cout<<*p<<endl;  //star or dereference operator

         //as pointer is also variable so it has its own address 
        //  as well
        // so for knowing the address the of pointer variable
        cout<<&p<<endl;
    }
