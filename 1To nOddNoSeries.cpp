#include<iostream>
using namespace std;
int main()
{
//	Ques: Display this AP (Arithmetic progression) - 1,3,5,7,9....upto 'n' terms.
//   we will solve this by two methods
//   1. easy math
//   2. without math
//like 1,5,9,13,?    sol: 4 difference between each word so 13+4=17 will be the ans.
//  1.By math method
//nth term formula  a = a + (n-1) d
//          a is 1st term,n is no of terms,d is difference
// in this problem a is 1,n is n and d is 2 bec 1,3 has 2 no differance and all as same
//      a = 1(n-1)2
//      a = 2n-1 the condition we will put in our program

  int n;
  cout<<"Enter n: ";
  cin>>n;
  
  for(int i=1;i<=2*n-1;i=i+2)
  {
  
  			cout<<i<<" ";
	  
  
  }
  

	
}
