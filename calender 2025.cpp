#include<iostream>
using namespace std;
int main()
{
	int month;
	cout<<"\n \t calender 2025";
	cout<<"\n \t ==============";
	cout<<"\n \t Enter month number to know number of days in that month: ";
	cout<<"\n \t ======================================================== ";
	cin>>month;
	
	switch(month){
	
	case 1:
			cout<<"\n \t Month name is January. ";
			cout<<"\n \t Number of days in January is 31.";
			break;
			
			case 2:
			cout<<"\n \t Month name is February. ";
			cout<<"\n \t Number of days in February is 28.";
			break;
			
			case 3:
			cout<<"\n \t Month name is March. ";
			cout<<"\n \t Number of days in March is 31.";
			break;
			
			case 4:
			cout<<"\n \t Month name is April. ";
			cout<<"\n \t Number of days in April is 30.";
			break;
			
			case 5:
			cout<<"\n \t Month name is May. ";
			cout<<"\n \t Number of days in May is 31.";
			break;
			
			case 6:
			cout<<"\n \t Month name is June. ";
			cout<<"\n \t Number of days in June is 30.";
			break;
			
			case 7:
			cout<<"\n \t Month name is July. ";
			cout<<"\n \t Number of days in July is 31.";
			break;
			
			case 8:
			cout<<"\n \t Month name is August. ";
			cout<<"\n \t Number of days in August is 31.";
			break;
			
			case 9:
			cout<<"\n \t Month name is September. ";
			cout<<"\n \t Number of days in September is 30.";
			break;
			
			case 10:
			cout<<"\n \t Month name is October. ";
			cout<<"\n \t Number of days in October is 31.";
			break; 
			
			case 11:
			cout<<"\n \t Month name is November. ";
			cout<<"\n \t Number of days in November is 30.";
			break;
			
			case 12:
			cout<<"\n \t Month name is December. ";
			cout<<"\n \t Number of days in December is 31.";
			break;
			
			default:
				cout<<"\n \t Invalid month number ! ";
			
	}
	return 0;
}
