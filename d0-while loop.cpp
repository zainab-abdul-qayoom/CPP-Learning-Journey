#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long count = 1;
	float tot_sal=0,salary;
	char ch;
	
	do
	{
		cout<<"\n Enter salary of employee "<<count<<"->";
		cin>>salary;
		tot_sal=tot_sal+salary;
		cout<<"\n Press y to enter more salaries ";
		ch=getche();
		count++;
	}
	
	while (ch=='y' || ch=='Y');
	
		cout<<"\n Total salary paid is "<<tot_sal;
	return 0;
}
	
	
	

