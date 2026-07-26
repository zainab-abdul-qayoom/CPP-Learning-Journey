#include<iostream>
using namespace std;
class animal
{
virtual void sound()=0;//which sound of animal we can write?as all animal has diff.sounds
	//so we made it pure virtual function
	//this class is called abstract class bec of virtual function. and
	//we cannot make the object of abstract class like animal.
	//abstract class has no body.
	
	public:
	void eat(){
		cout<<"animal eating.."<<endl;
	}
};
class dog: public animal
{
	public:
		void sound()
		{
			cout<<"woof woof...."<<endl;
		}
};
int main()
{
	dog d;
	d.sound();  //sound is function and d is object
	d.eat();
	return 0;
}
