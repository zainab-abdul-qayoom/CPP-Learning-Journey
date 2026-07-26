#include<iostream>
using namespace std;
int main()
{
	int obtainedMarks;
	cout<<"Enter Your Obtained Marks Here: ";
	cin>>obtainedMarks;
	
	int percentage;
	percentage = (obtainedMarks*100)/500;
	cout<<percentage;
	
	switch(percentage)
	{
	case 100:
		cout<<"Perfect!";
		break;
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
		case 93:
		case 92:
		case 91:
		case 90:
			cout<<"Your Grade is A1: ";
			break;
			
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
		case 83:
		case 82:
		case 81:
		case 80:
			cout<<"Your Grade is A: ";
			break;
			
		case 79:
		case 78:
		case 77:
		case 76:
		case 75:
		case 73:
		case 72:
		case 71:
		case 70:
			cout<<"Your Grade is B+: ";
			break;
			
		case 69:
		case 68:
		case 67:
		case 66:
		case 65:
		case 63:
		case 62:
		case 61:
		case 60:
			cout<<"Your Grade is B: ";
			break;
			
		case 59:
		case 58:
		case 57:
		case 56:
		case 55:
		case 53:
		case 52:
		case 51:
		case 50:
			cout<<"Your Grade is C: ";
			break;
		
			
	}
	
}
