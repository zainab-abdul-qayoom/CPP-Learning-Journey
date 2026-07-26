#include<iostream>
using namespace std;
int main()
{
	//Logical 3 types 		Truth table
	//1. AND &&	1 && 1 = 1		=> 1 && 0 = 0	
	//2. OR ||	1 || 0 = 1		==> 0 || 1 = 1 	==> 1 || 1 = 1 same as negative
	//3. NOT !	1 = 0			==> 0 = 1
	
	
//	if(!(1 != 1)){
//		cout<<"if print";
//	}
//	else{
//		cout<<"Else print";
//	}


            //And operator
          int a = 10;
          int b = 20;
          int c = 30;
          
     if(c>b && b>a){
     	cout<<"if print"<<endl;
     }
     else{
     	cout<<"else print"<<endl;
	}
	
	
	       //OR operator
	     if(c>a || a>b){
	     	cout<<"if print"<<endl;
		}
		else{
     	cout<<"else print"<<endl;
     }
            //Not operator
            if(a != b){
            	cout<<"if print"<<endl;
		  }
		  else{
     	cout<<"else print"<<endl;}
     	
     	return 0;
     

}
