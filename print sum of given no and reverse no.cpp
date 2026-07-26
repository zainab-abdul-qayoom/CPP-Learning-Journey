#include<iostream>
using namespace std;
int main()
{
//	Ques: WAP to print the sum of given number and its reverse
	int n;
	int reverse=0;
	int digit,sum;
	cout<<"Enter number: ";
	cin>>n;
	
	int original = n;      //if 1234 input then temporary = 1234
	
	// for reverse the number like 1234 into 4321
	while(n > 0)
	{
		digit = n % 10; // get last digit like in 1234 take 4 to reverse
		reverse = reverse * 10 + digit; // add this digit like 4 to the reverse 
//		                              like r= 0*10+4=4
        n = n/10;  // remove the last digit like 4 then the loop will continue from 123
//                    1234 ===> 123
        // loop continues until n becomes 0.
        
//        after this the n will be reverse like from 1234 ==> 4321
}
    
    // for add original and reverse
       sum = original + reverse;
       
       //now print the ans just
       
       cout<<"Original number: "<<original<<endl;
       cout<<"Reverse number: "<<reverse<<endl;
       cout<<"Sum = "<<sum<<endl;
       return 0;

	}
	

