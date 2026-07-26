#include<iostream>
using namespace std;
void trianglePyramid6(int n)
{
//    output:

//    1 1 1 1 1
//    2 2 2 2
//    3 3 3
//    2 2
//    1

     for(int i=n;i>=1;i--)
     {
     	for(int j=1;j<=i;j++)
     	{
     		cout<<i;
		}
		cout<<endl;
	}
	
}
int main()
{
	int num = 5;
	trianglePyramid6(num);
	cout<<endl;
}
