#include<iostream>
using namespace std;
int main()
{
	int h,m;
	cout<<"Input the time in 24 hours format"<<endl;
	cout<<"Input hours: ";
	cin>>h;
	
	cout<<"Input minutes: ";
	cin>>m;
	
	
	if(h>=12 && h<=24 || m>=1 && m<=59){
	
			cout<<"The time is PM"<<endl;
		
	}
	
	else if(h>=0 && h<=11 || m>=1 && m<=59){
		
				cout<<"The time is AM"<<endl;
		
	}
	else{
		cout<<"Input is wrong "<<endl;
	}
	return 0;
}
