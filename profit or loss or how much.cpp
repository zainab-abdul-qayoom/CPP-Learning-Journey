#include<iostream>
using namespace std;
int main()
{
//	Ques: If cost price and selling price of an item is input through the keyboard, write a program
//	     to determine whether the seller has made profit or incurred loss or no profit no loss.Also
//	     determine how much profit he made or loss he incurred.

  int cp;
  cout<<"Enter cost price: ";
  cin>>cp;
  
  int sp;
  cout<<"Enter selling price: ";
  cin>>sp;
  
  if(cp<sp)
  {
  	cout<<"Profit"<<endl;
  	cout<<"The profit is "<<sp-cp<<" rupees";
  }
  
  else if(cp>sp)
  {
  	cout<<"Loss"<<endl;
  	cout<<"The loss is "<<cp-sp<<" rupees";
  }
  else 
  {
  	cout<<"No profit no loss"<<endl;
  	cout<<"The profit or loss is "<<"0 rupees";
  }
}

