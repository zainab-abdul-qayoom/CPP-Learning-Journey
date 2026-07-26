#include<iostream>
using namespace std;
int main()
{
	float angl1,angl2,angl3;
	cout<<"Enter first angle: ";
	cin>>angl1;
	
	cout<<"Enter second angle: ";
	cin>>angl2;
	
	cout<<"Enter third angle: ";
	cin>>angl3;
	
	if((angl1+angl2+angl3) == 180)
	{
		if(angl1 != 0 && angl2 != 0 && angl3 !=0)
		cout<<"Valid triangle";
	
		
	else{
		cout<<"Invalid triangle";
	}
}
	else{
		cout<<"Invalid triangle";
	}
	return 0;
}
