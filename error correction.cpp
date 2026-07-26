#include<iostream>
using namespace std;
void Table(void) //function prototype

{
	int m;
	cout<<"\n The value of m...";
	cin>>m;
	
	for(int n=1; n<=10;)
	{
		cout<<"\n \t "<<m<<" * "<<n<<" = "<<m*n;
		n++;
	}
}
int main()
{
	Table();
	return 0;
}
