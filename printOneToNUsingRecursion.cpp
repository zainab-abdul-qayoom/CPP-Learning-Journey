
// ques: print 1 to n using extra parameter in recursion

/*   #include<iostream>
using namespace std;
void print(int x, int n)
{
    if(x>n) return; //base case
    cout<<x<<endl; //work
    print(x+1,n); //call
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    print (1,n);
}     */

// ques: print 1 to n without using extra parameter in recursion
//   the solution is simply do the work after call as show in line 29,30
  
#include<iostream>
using namespace std;
void print(int n)
{
    // swap or exhange the call and work 
    if(n==0) return; //base work
    print(n-1);  //call
    cout<<n<<endl; //work
    }
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
     print(n);
}    