#include<iostream>
using namespace std;
int main()
{
	string name = "Omer";
	int ID = 123;
	
	cout<<"Student information, "<<endl;
	cout<<"The Student name is: ";
	cout<<name<<endl;
	cout<<"Student ID is: ";
	cout<<ID<<endl;
	cout<<"Update student name: ";
	cin>>name;
	cout<<"The Student name is: "<<name;
	return 0;
}
