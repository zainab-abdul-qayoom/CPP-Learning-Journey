
	//program of an average of two numbers by using use-defined function.
#include<iostream>
#include<math.h>
using namespace std;

float average(int x, int y);    //function prototype
int main()
{
	float avg;
	int x,y;
	cout<<"\n \t Enter the value of x......: ";
	cin>>x;
	cout<<"\n \t Enter the value of y......: ";
	cin>>y;
	average(x,y);
	avg = (x+y)/2;
	cout<<"\n \t The average of two number is....."<<avg;
	return 0;
}
float average (int x, int y)
{
	float avg;
	avg = (x+y)/2;
	return avg;
	
}

