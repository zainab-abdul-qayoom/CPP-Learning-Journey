#include<iostream>
using namespace std;
void greet()
{
    cout<<"hey"<<endl;
    greet();  //contine hey print bec of repitation/multiple call
}
int main()
{
    //Recursion mean function Calling itself
    greet();

    //the work of recurion is:
    // 1. replacement of for loop
    // 2. ak chiz user kry baki me kr ke lata hun 
 
     //observation from recursion
     // 1. repetition
     // 2. infinite loop
     // so may there is any technique to stop the recursion?
     // yes!  the concept of basecase which work as a condition in for loop

     //in general recursion there is 3 things:
       // 1. Base case
       // 2. Work
       // 3. call
}