#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter size: ";
    cin>>n;

   

    for(int i=1;i<=n;i++)  
    {
        for(int j=1;j<=n;j++) 
        {
            if(i==j|| i+j==n+1) cout<< "*";  //i==j main diagonal
           else  cout<<"  ";                 //i+j==n+1 other diagonal
        }
       cout<<endl;
    }

   
}