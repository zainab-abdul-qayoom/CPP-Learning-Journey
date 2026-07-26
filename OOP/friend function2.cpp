#include<iostream>
using namespace std;
class muqadas;
class zainab
{
	private:
		int a;
	public:
		void ihave()
		{
			a = 10;
		}
		friend void wajeeha(zainab p, muqadas p2);
		
};


class muqadas
{
	private:
		int b;
	public:
		void ihave()
		{
			b = 10;
		}
		friend void wajeeha(zainab p,muqadas p2);
		
};
void wajeeha(zainab p, muqadas p2)
{
	int c;
	c=p.a + p2.b;
	cout<<c;
	
}
int main()
{
	zainab a;   //a is store in p
	a.ihave();
	muqadas a2; //a2 is store in p2
	a2.ihave();
	wajeeha(a,a2);  
	
	return 0;
}
