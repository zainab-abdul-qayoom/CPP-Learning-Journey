#include<iostream>
using namespace std;
int main()
{
//	Ques: given a point (x, y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 
//	       3rd Quadrant, 4th quadrant, one the x-axis,y-axis,or at the origin viz(0,0).

int x,y;
cout<<"Enter the x point: ";
cin>>x;
cout<<"Enter the y point: ";
cin>>y;

if(x==0 and y==0)
{
	cout<<"Point lies at the origin";
}
else if(x==0)
{
	cout<<"Point lies on the y-axis";
}
else if(y==0)
{
	cout<<"Point lies on the x-axis";
}
else if(x>0 and y>0)  // +x and +y
{
	cout<<"Point lies at the 1st Quadrant";
}
else if(x<0 and y>0)  //-x and +y
{
	cout<<"Point lies at the 2nd Quadrant";
}
else if(x<0 and y<0) // -x and -y
{

      cout<<"Point lies at the 3rd Quadrant";}
else  //+x and -y
{
	cout<<"Point lies at the 4th Quadrant";
}

}
