#include<iostream>
using namespace std;
int main()
{
	int table,i=1;
	cout<<"Enter Table number: ";
	cin>>table;
	while(i<=10){
		cout<<table<<" * "<<i<<" = "<<table*i<<endl;
		i++;
	}
}
