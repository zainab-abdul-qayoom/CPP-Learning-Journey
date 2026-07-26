#include<iostream>
using namespace std;
int main ()
{
//int n=1,sum=0;
//while(n<=10)
//{
//
//	if(n % 2!=0)
//	{
//		cout<<n;
//	sum=sum+n;	
//	}
//	n++;
//	
//}
//cout<<sum<<endl;

int n=10,sum=0;
for(int i=1;i<=n;i++){
	if(i%2==0){
		cout<<i<<" "<<endl;
		sum=sum+i;
	}
	
	
}
cout<<sum;


}
