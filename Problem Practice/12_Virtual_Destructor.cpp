/*
    Virtual Destructor : 
        If we create pointer of base class which is pointing to the
        derived class then only base will be destroyed and derived
        class will not be destroyed.
        For destroying both base and derived class we need to create virtual
        destructor by using virtual keyword in front of destructor of base class
        Virtual function can't be overloaded.
*/
#include<iostream>
using namespace std;

//Base class or Parent class or Super class
class Base{
public:

	// destructor
	// ~Base(){
	// 	cout << "Base class destroyed" << endl;
	// }


	// After using virtual keyword
	/*
        output will be ->

            derived class destroyed
            Base class destroyed

	*/
	virtual ~Base(){
		cout << "Base class destroyed" << endl;	
	}
	
};

//Child class or sub class or derived class
class Derived : public Base{
public:
	//destructor
	~Derived(){
		cout << "derived class destroyed" << endl;
	}
};

int main(){
	
	Base *ptr = new Derived; //pointer of base class pointing to derived class
	delete ptr;
	return 0;
}