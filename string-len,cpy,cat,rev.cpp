#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//string-len
	char str1[]="Zainab";
	cout<<str1<<endl;
    int r=strlen(str1);  //use to determine the length of a string.
	cout<<r<<endl;
	
	//string-rev
	char str2[]="Zainab";
	cout<<str2<<endl;
    strrev(str2); //used when we want to reverse our string
    cout<<str2<<endl;
    
    //string-cat
	char str3[]="Zainab";
	char strr[]="Gondal";
    strcat(str3,strr); //used when combine two string
	cout<<str3<<endl;
	
	//string-cpy
	char str4[]="Zainab";
	char string[20];
    strcpy(string,str4);   //used when we copy of 1 string into other
	cout<<string<<endl;
	
}
//another strings
//strlwr()
//strupr()
