

// continue
//  if u want to skip a particular round at a once time.
#include<iostream>
using namespace std;
int main()
{
//	Ques: Print 1 to 20 number except 3 and 8.
   for(int i=1;i<=20;i++)
   {
//   	if(i!=3 and i!=8) except 3 and 8 all 1 to 20 print
//       if(i==3 || i==8) continue;
//       or
      if (i==3) continue;
     if  (i==8) continue;
   	{
   			cout<<i<<" ";
	}
   
   }
}

