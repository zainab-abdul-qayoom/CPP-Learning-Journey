#include<iostream>
using namespace std;
int main()
{
//	jump statement change execution of program from its normal sequence.
//	following are the jump statements used in C++:
//		1. break
//		2. continue
//		3. goto
//		4. return
//		5. exit()

   int i,sum,num;
   i=0; sum=0;
   cout<<"\n Enter five numbers to add. Enter 0 to terminate -> ";
   while(i<5)
   {
   	cin>>num;
   	
   	if(num == 0){
   		cout<<"\n Ending program ";
   		break;
	   }
	   sum=sum+num;
	   i++;
	   
   }
   cout<<"\n sum of    "<<i<<"   number(s) is:  "<<sum;
   return 0;
}
