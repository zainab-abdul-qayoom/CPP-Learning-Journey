#include<iostream>
using namespace std;
struct stu
{
	int roll;
	char name[20];
	float marks;
	
	
};

int main()
{
	struct stu s;
	cout<<"Enter student roll number: ";
	cin>>s.roll;
	cout<<"Enter Student name: ";
	cin>>s.name;
	
	cout<<"Enter Student marks: ";
	cin>>s.marks;
	
	cout<<s.roll<<ends<<s.name<<ends<<s.marks;
	
	return 0;
}
//in union print cout after cin but in structure cout is in the end.
