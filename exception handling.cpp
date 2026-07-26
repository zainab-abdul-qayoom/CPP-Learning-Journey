#include<iostream>
using namespace std;
int main()
{
	cout<<"Execution Starting..."<<endl;
	int a,b,c;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	
//	c=a/b;    //it is risky code. it doesnot accept 0. rest all no it divide so its called exception. for this problem overcome what the solution?
     //solution
     
     try{
     	if(b==0)
     	throw b;
     	c=a/b;
     	cout<<"Result: "<<c;
     	
	}
	catch(int x)
	{
	   cout<<"Can't divide by "<<x;	
	}
//	cout<<"Result: "<<c;
	cout<<endl<<"Execution Ended...";
	return 0;
}

