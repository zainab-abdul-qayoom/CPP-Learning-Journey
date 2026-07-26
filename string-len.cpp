#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[]="Zainab";
	cout<<str1<<endl;
    int r=strlen(str1);  //use to determine the length of a string.
	cout<<r<<endl;
	
	
	char str2[]="Zainab";
	cout<<str2<<endl;
    strrev(str2); //used when we want to reverse our string
    cout<<str2<<endl;
    
    
	char str3[]="Zainab";
	char strr[]="Gondal";
    strcat(str3,strr); //used when combine two string
	cout<<str3<<endl;
	
	
	char str4[]="Zainab";
	char string[20];
    strcpy(string,str4);   //used when we copy of 1 string into other
	cout<<string<<endl;
	
}
