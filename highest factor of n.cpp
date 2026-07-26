#include<iostream>
using namespace std;
int main()
{
//	Ques: write a program to find the highest factor of a number 'n' (other than n itself)
// like n = 24 
//24 has 1,2,3,4,6,8,12 factors and in 24 it is present but in program n itself will be not print.
	
	int n;
	cout<<"Enter n: ";
	cin>>n;
//	int f = 1;  // store highest factor.
//	for(int i=1;i<n;i++)  // loop work as n-1 mean if i put 60 in output so loop will work for 59 times.
//     if i write this then loop work for 30 times so memory will save
//     for(int i=1;i<=n/2;i++) agr me ulta loop chalao mean start hi highest factor sy ho.
       for(int i=n/2;i>=1;i--)
	{
		if(n%i==0)
		
//				f = i;
cout<<i<<" ";  // we have to print just highest no and i has all factors. //all factors print hongy ulty jesy
                                                                           //60 ka 30,20,12 etc
//          lekin agr break lgaye gy to sirf 30 print honga
				break; //to get out from the loop immediately //loop tor do ak ke baad.
			
		
	}
//		cout<<"The highest factor of "<<n<<" is "<<f<<" ";
	}
	
	

