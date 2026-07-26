#include<iostream>
using namespace std;
int main()
{
	int table;
	cout<<"\n \t Enter Table: ";
	cout<<"\n \t ============ ";
	cin>>table;
	
	for(int a=1;a<=10;a++)
	{
		cout<<"\n \t "<<table<<" * "<<a<<" = "<<table*a<<endl;
	}
	
}
