#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"Enter your marks: ";
	cin>>mark;
	if (mark >= 50){
		cout<<"you passed. " <<endl;
		if (mark == 100){
			cout<<"perfect! "<<endl;
		}
	}
	else {
		cout<<"You failed. "<<endl;
	}
}
