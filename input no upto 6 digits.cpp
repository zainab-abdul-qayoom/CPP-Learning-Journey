#include<iostream>
using namespace std;
int main()
{
	string num;
	cout<<"\n \t Input a number upto six digits. ";
	cout<<"\n \t ===============================";
	cin>>num;
	
	
	
	for (int i=0;i < num.length();i++){
		cout<<num[i]<<endl;
	}
}
