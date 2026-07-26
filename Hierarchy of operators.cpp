// Hierarchy of operators: 
#include<iostream>
using namespace std;
int main()
{

int i = 2*3/4 ;
cout<<i;

}

//BO|DM|A|S|:
// D is division
// M is multiplication
// A is addition
// S is substraction
//
//in bodmass priority order:
//	1. Division or multiplication
//	2. Addition
//	3. Substraction
//
//1. method to solve  i =2*3/4  (1st priority of multiplication)
//                      =6/4
//                      1.5 ans but its integer so ans will be 1.
//                      1 ans.
//2. method to solve i =2*3/4    (1st priority of division)
//                     =2*0.75  but its integer so ans will be 0
//                     =2*0
//                     =0 ans.
//                    Now what will be the answer?
//                    It will be 0 or 1.
//                    as in BODMAS division comes 1st so may be ans will be 0
//				      but
//					 the ans will be 1. 
//					 why?
//					 after apply BODMAS we solve left to right.
//					 like 2*3 = 6
//					 now  6/4 = 1. 
//                      
