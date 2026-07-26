#include<iostream>
using namespace std;
class myBank
{
	private:
	int atmPIN,Balance;
	public:
	string bName,IFSC;
	int accNumber;
	
void input()
{
	atmPIN=4598;
	Balance=674589;
	bName="Paytm";
	IFSC="Pytm0123456";
	accNumber=45236789;
}
	void output()
	{
		cout<<"Zainab Bank details:  "<<endl;
		cout<<"Zainab atm PIN: "<<atmPIN<<endl;
		cout<<"Zainab bank balance: "<<Balance<<endl;
		cout<<"Zainab bank name: "<<bName<<endl;
		cout<<"Zainab IFSC: "<<IFSC<<endl;
		cout<<"Zainab acc Number: "<<accNumber<<endl;
	}
};
int main()
{
	myBank m;
	m.input();
	m.output();
	
	cout<<"wajeeha trying to access my account..."<<endl;
	     
	     //cout<<"Zainab atm PIN: "<<m.atmPIN<<endl;  // cannot access
		//cout<<"Zainab bank balance: "<<m.Balance<<endl; //cannot access
		cout<<"Zainab bank name: "<<m.bName<<endl;
		cout<<"Zainab IFSC: "<<m.IFSC<<endl;
		cout<<"Zainab acc Number: "<<m.accNumber<<endl;
	
	return 0;	
}
