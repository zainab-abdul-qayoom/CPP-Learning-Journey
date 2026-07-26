#include<iostream>
using namespace std;
int main()
{
	int n = 4, k = 2;
	cout<<++n<<endl;   //5
	cout<<n<<endl;
	
     cout<<n++<<endl;  //5   //n=6 store
     cout<<n<<endl;
     	
     cout<<-n<<endl;  //-6
     cout<<n<<endl;
     	
     cout<<--n<<endl;  //5
     cout<<n<<endl;
     			
     cout<<n--<<endl;  //5 n= 4 store
     cout<<n<<endl;
     
     cout << n + k << endl;   //4+2= 6
      cout << n << endl;     //4
       cout << k << endl;     //2
        cout << n << k << endl;  
        
     cout <<        n <<endl;   //4
     cout << " " << n <<endl;
     cout << "n" << endl;
     cout << "\n" << endl;
     
     cout << " n * n = ";   //16
     cout <<  n * n <<endl;
     cout << 'n' << endl;
     
     return 0;
     					
}
