#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int y = 5;
	int z = 12;
	
	cout<<"\n \t LOGICAL OPERATOR";
	cout<<"\n \t =================";
	cout<<"\n \t " << ((x>y) && (x<z)) << "\n \t AND OPERATOR"<<endl;
	cout<<"\n \t "<< ((x>y) || (x>z)) <<"\n \t OR OPERATOR"<<endl;
	cout<<"\n \t "<<!(x<y) <<"\n \t NOT OPERATOR"<<endl;
	return 0; 
}
