#include<iostream>
using namespace std;
int main()
{
	float wid,hei,len,vol;
	cout<<"Calculate the volume of a box: "<<endl;
	cout<<"=============================="<<endl;
	cout<<"Enter the width of a box: ";
	cin>>wid;
	cout<<"Enter the Height of a box: ";
	cin>>hei;
	cout<<"Enter the Length of a box: ";
	cin>>len;
	vol=wid*hei*len;
	cout<<"The Volume of a box is: "<<vol;
	return 0;
	
}
