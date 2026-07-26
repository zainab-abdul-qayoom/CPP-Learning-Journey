#include<iostream>
using namespace std;
int main()
{
	int x = 4, y = 0;
	while(x>=0)
	{
		x--;// 1.  3 2.  2 3.  1 4.  0
		y++;//1.  1 2.  2 3.  3 4.  4
		
		if(x==y)  //1.  3==1  false  2.  2==2  true so continue mean skip. 3. 1==3 false  4. 0==4 false
		 continue;
		 else
		     cout<<x<<" "<<y<<endl; //1.    3    1  
		                            //2. continue bec while contition was true so 2  2 will not be printed.
		                            //3.      1    3 
		                            //4.      0    4
	}                                
}
