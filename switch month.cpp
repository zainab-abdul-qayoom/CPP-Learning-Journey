#include<iostream>
using namespace std;
int main()
{
	int month;
	cout<<"\n \t Ener the month number to know month name: ";
	cout<<"\n \t========================================== ";
	cin>>month;
	switch(month){
		case 1:
			cout<<"\n \t January. ";
			break;
			
			case 2:
			cout<<"\n \t February. ";
			break;
			
			case 3:
			cout<<"\n \t March. ";
			break;
			
			case 4:
			cout<<"\n \t April. ";
			break;
			
			case 5:
			cout<<"\n \t May. ";
			break;
			
			case 6:
			cout<<"\n \t June. ";
			break;
			
			case 7:
			cout<<"\n \t July. ";
			break;
			
			case 8:
			cout<<"\n \t August. ";
			break;
			
			case 9:
			cout<<"\n \t September. ";
			break;
			
			case 10:
			cout<<"\n \t October. ";
			break;
			
			case 11:
			cout<<"\n \t November. ";
			break;
			
			case 12:
			cout<<"\n \t December. ";
			break;
			
			default:
				cout<<"\n \t Invalid ! ";
			
	}
	return 0;
}
