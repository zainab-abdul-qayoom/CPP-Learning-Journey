#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"Enter user choice: ";
	cin>>ch;
	switch(ch)
	{
		case 0:cout<<"Sunday";
		break;
		case 1:cout<<"Monday";
		break;
		case2:cout<<"Tuesday";
		break;
		case 3:cout<<"Wednesday";
		break;
		case 4:cout<<"Thursday";
		break;
		case 5:cout<<"Friday";
		break;
		case 6:cout<<"Saturday";
		break;
		default: cout<<"Invalid Choice";
	}
	return 0;
}
