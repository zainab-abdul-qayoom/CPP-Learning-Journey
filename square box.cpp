#include<iostream>
using namespace std;
int main()
{
	char cha;
	cout<<"Enter a character: ";
	cin>>cha;
	
	int row;
	cout<<"Enter number of rows: ";
	cin>>row;
	
	int colum;
	cout<<"Enter number of columns: ";
	cin>>colum;
	
	for(int i=0; i<row;i++){
		
		for(int j=0;j<colum;j++){
			cout<<cha;
		}
		cout<<endl;
	}
	
}
