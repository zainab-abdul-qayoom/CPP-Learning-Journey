#include<iostream>
using namespace std;
void china()
{
    cout<<"You are in china"<<endl;
  
}

void pakistan()
{
    cout<<"You are in pakistan"<<endl;
   china();
}

int main()
{
   cout<<"You are in main"<<endl;
   pakistan();
   return 0;
}