#include<iostream>
using namespace std;
int main()
{
	int n = 5;
//	cout<<"Enter no of rows: ";
//	cin>>n;
	
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=row;col++)
		cout<<row;   //now it prints 1, 22, 333, 4444, 55555
		//cout<<col; so it prints 1, 12, 123, 1234, 12345
		cout<<endl;
	}
}
