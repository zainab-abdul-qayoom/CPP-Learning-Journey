#include<iostream>
using namespace std;
               //simple/single inheritance: 
class Dad   //base class
{
	
	protected:
	int amount;    //it is private by default but we do it protected in data member
	               //bec as son class used this as well.
	               
	public:
		void input()
		{
			amount=10000;
		}
};
class Son : public Dad   //derived class
{
//	int money=5000;  //code run but give warning here bec class son is private so we
	                  //put it in void show().
  public:
  	void show()
  	{
  		int money=5000; 
  		cout<<"Son money: "<<money<<endl;
  		cout<<"Dad's money: "<<amount;
	  }
};
int main()
{
	//in case of inheritance we must make our object of derived class ex: Son.
	Son s;
	s.input();
	s.show();
	
	return 0;
}
