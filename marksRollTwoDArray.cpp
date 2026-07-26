#include<iostream>
using namespace std;
int main()
// ques: write a program to store roll no and marks obtained by 4 students side by side in a matrix

 {                    //4 rows and 2 colums roll no and marks of 4 students
    int arr[4][2] = {{1,89},{2,67},{3,80},{4,76}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}