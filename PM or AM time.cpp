#include<iostream>
using namespace std;
int main()
{
	float num;
	cout<<"Enter the time here: ";
	cin>>num;
	
//	if(num>=12)
//	{
//		cout<<"PM";
//	}
//	else{
//		cout<<"AM";
//	}

  if(num<=12)
  {
  	cout<<"AM";
  }
  
  else{
  	cout<<"PM";
  }
}
