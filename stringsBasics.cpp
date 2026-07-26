// why string is important?
// like if i want to write my name so i can do it as:
#include<iostream>
using namespace std;
int main()
{
    //zainab
    char arr [6] = {'Z', 'a', 'i', 'n', 'a', 'b'};
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

    // it takes a lot of time and create complexicity so for this problem there is solution 
    // named: strings
 cout<<"zainab is a student" <<endl;    /*it is a sentence like we will write in string but
                                 it will just print my sentence but doesnot store it
                                 so for storing we have 2 options:
                                 1. char
                                 2. string
            as we see that char is complex to write a long sentence so we will use string */

        string x = "zainab is a student";
        cout<< x; //now in x variable my sentence is stored.
        
        // for taking input from user
        cout<<endl;

        string s;
        cout<<"Enter String";
        //cin>>s;   //cin does not support the sentence which has gaps 
                  //for ex: if i write zainab gondal then it will print zainab only.
        //cout<<s;   // so what will be the solution of this problem?
                // very simple we will use getline instead of cin directly
           // how?
           getline(cin,s);  //1st write cin and then comma and then string name
           cout<<s; //now it will print zainab gondal not just zainab

}