#include<iostream>
using namespace std;
void func()
{
	
	char cha;
	cout<<"Enter the character: ";
	cin>>cha;
	
	int height;
	cout<<"Enter the height of box: ";
	cin>>height;
	
	int length;
	cout<<"Enter the length of box: ";
	cin>>length;
	
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<length;j++){
			cout<<cha;
		}
		cout <<endl;
		
	}
	

}
int main()
{
	func();
	return 0;
}
