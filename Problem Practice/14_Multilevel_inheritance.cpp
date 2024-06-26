/*
    In multilevel inheritance, a derived class inherits from another derived class. 
    This creates a chain of inheritance.

    class c inherits class B
    class B inherites class A
    C <- B <- A

    [ <- ] : inheritence 

*/
#include<iostream>
using namespace std;

//Here child class is inheriting from parent and parent is inheriting from grandparent class
class Grandparent{
    public:
    int grandparentData;
};

class Parent : public Grandparent{
    public:
    int parentData;
};

class Child : public Parent{
public:
int childData;
};

int main(){
    //Crate the object of child class
    Child childobj;

    // Assign the value to data member inherited from Grandparent, parent and Child

    childobj.grandparentData = 42;
    childobj.parentData = 24;
    childobj.childData = 12;

    // Display the values of data members
    cout << "Grandparent Data: " << childobj.grandparentData << endl;
    cout << "Parent Data: " << childobj.parentData << endl;
    cout << "Child Data: " << childobj.childData << endl;
    return 0;

}
