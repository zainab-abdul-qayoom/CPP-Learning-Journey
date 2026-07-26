#include<iostream>
using namespace std;
class A
{
    public:
     virtual void person() //virtual stop the pointer to execute.then pointer
     //go to class B to see that the person name object is present if yes so it will
     //executed that one.
    {
    	cout<<"good morning"<<endl;
	}	
};
class B : public A
{
    public:
    void person()
    {
    	cout<<"good night"<<endl;  //only good night print if we have same object like in class
    	// A and B "void person()" written so it will only print class B which is
    	//a disadvange of run-time polymorphism so the solution is wriiten in line no 26.
    	//another solution is pointer(pointer is used to allocate the dynamic memory/runTime/function overriding.)
    	//this solution written in line no 25,28,29
	}		
};
int main()   //  "::" (resolution operator)
{
	A *p; //jis class ka pointer he usi ka print hoga output but if we want to print
	//class B output then? solution is in line no: 6. 
	B obj;
	p=&obj;
	p->person();
//	obj.person();
//	obj.A::person();
	
	return 0;
}
