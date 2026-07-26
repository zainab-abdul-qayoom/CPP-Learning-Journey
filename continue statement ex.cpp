#include<iostream>
using namespace std;
int main()
{
	int i,num,sum;
	cout<<"Enter five positive numbers-> ";
	while(i<5){
		cin>>num;
		if(num<0){
			cout<<"\n Enter positive number";
		continue;
		}
		
	
	sum = sum+num;
	i++;
}
cout<<"\n sum of five positive numbers is "<<sum;
return 0;
}
