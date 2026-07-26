#include<iostream>
using namespace std;
int main()
{   

      //Ex: 1.
      
//	int i=1;
//	i = i++ + ++i;    //1  2 store. //3   in between them 1+3=4.
//	cout<<i<<endl;

        //Ex: 2.
        
//        int i=1;
//        int j=2;
//        int k;
    //1       //2  
//        k=i + j + i++ + j++ + ++i + ++j;   
//        cout<<i<<" "<<j<<" "<<" "<<k<<endl;
//        return 0;

          //Ex: 3.
          
//          int i=0;
//          i = i++ - --i + ++i - i--;
//          cout<<i<<endl;
//          return 0;

           //Ex: 4.
//           
//           int i=1, j=2, k=3;
//           int m = i-- - j-- - k--;
//           cout<<i<<endl;
//           cout<<j<<endl;
//           cout<<k<<endl;
//           cout<<m<<endl;
//           return 0;
//           
            //Ex: 5.
            int i=10, j=20, k;
            k = i-- - i++ + --j - ++j + --i - j-- + ++i -j++;
            cout<<i<<endl;
            cout<<j<<endl;
            cout<<k<<endl;
            return 0;
            
           
           
   
}
