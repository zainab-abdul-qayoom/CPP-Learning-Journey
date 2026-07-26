#include<iostream>
using namespace std;
int main()
{
	int a = 5, b = 6;
	
	if (a >6){
		cout<<"a is greater than 6";
		if (a == 5){
			cout<<"a is equal to 5";
		}
	}
	else if (b < 9){
		cout<<"b is greater than 9";
		if(b!= 6){
			cout<<"b is equal to 6";
		}
		else{
			cout<<"Inner else part";
		}
	}
	else{
		cout<<"always run";
	}
}
