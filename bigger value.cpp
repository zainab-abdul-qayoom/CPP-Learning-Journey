#include<iostream>
using namespace std;
int main()
{
	int x=50,y=40,z=55;
	
	if(x>y && x>z){
		if(y>z){
			cout<<"x > y > z"<<ends<<"if print"<<endl;
		}
		else{
			cout<<"x > z > y"<<endl;
		}
	}
	
	else if(y>x && y>z){
		if(x>z){
			cout<<"y > x > z"<<ends<<"else if print" <<endl;
		}
		else{
			cout<<"y > z > x"<<endl;
		}
	}
	
	else{
		if (x>y){
			cout<<"z > x > y"<<ends<<"else print if print"<<endl;   //in else if print
		}
		else{
			cout<<"z > y > x"<<endl;
		}
	}
	
	return 0;
}
