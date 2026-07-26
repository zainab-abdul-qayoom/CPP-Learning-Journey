#include<iostream>
using namespace std;
int main()
{
//	int carNo;
//	cout<<"Drag race \n";
//	for(int carNo=0;carNo<10;carNo++)
//	{
//		if(carNo==4)
//		{
//			break;
//		}
//		cout<<carNo;
//	}



   int i=1,j=1;
   while(i++<=10)
   {
   	while(j++<=20)
   	{
   		if(j==15)
   		break;
   		else
   		cout<<"\n"<<i<<"\t"<<j;
	   }
   }
}
