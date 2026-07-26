#include<iostream>
using namespace std;
class thief
{
	//data member should be private
	private:
	string name,address;
	int mob;
	
	
	//function should be public
	public:
	void input()
	{
		name="wajeeha";
		address="Dawlance road hali road";
		mob=60494272;
	}
	void output()
	{
		cout<<"Theif name is "<<name<<endl;
		cout<<"Theif name address "<<address<<endl;
		cout<<"Theif name Mobile number is "<<mob;
		
	}
};
class police:public thief
{
   	
};
int main()
{
	//police object
	thief p;
	p.input();
	p.output();
	//theif object
//	thief t;
//	t.input();
//	t.output();
	
	return 0;
}
