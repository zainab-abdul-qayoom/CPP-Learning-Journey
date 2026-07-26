#include<iostream>
using namespace std;
class zainab
{
	private:
	string tv;
	
	public:   //function always be public
	void show()
	{
		tv="IPL Final 2025";
	}
	friend void wajeeha(zainab r);  //r is a place where wajeeha sit and watch the match in my house.
	
};
void wajeeha(zainab r)
{
	cout<<"I am wajeeha now i, Watching: "<<r.tv;
}
int main()
{
	zainab a;  //this a will shore in r.
	a.show();
	wajeeha(a);   
	return 0;
}
