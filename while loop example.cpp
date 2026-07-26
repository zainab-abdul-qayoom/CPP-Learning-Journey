#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//no of text or word will be typed.
	int num = 0;
	char ch;
	
	cout<<"Type any word or text, press enter to terminate -> ";
	ch = getche();
	while(ch!='\r')
	{
		num++;
		ch= getche();
		
	}
	cout<<"\n Total number of characters typed "<<num;
	return 0;
}
