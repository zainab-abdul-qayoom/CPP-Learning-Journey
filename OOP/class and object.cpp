#include<iostream>
using namespace std;
//class print
//{
//	public:
//	void show()
//	{
//		cout<<"Welcome to learn coding";
//	}		
//};
//int main()
//{
//   print obj;	
//   obj.show();
//   return 0;
//   
//}


class person{
	private:
		//state
	int run;     
	string msg;
	public:   
	//behaviour  
		void play()
		{
			run = 50;
			cout<<"Today I scored "<<run<<" runs"<<endl;
			
		}
		void walk()
		{
			msg="today i walked 3 kilometers";
			cout<<msg;
		}
};
int main()
{
	//identity
	person obj;
	obj.play();
	obj.walk();
	return 0;
}
