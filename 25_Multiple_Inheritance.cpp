#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void displayBase1() {
        cout << "Displaying from Base1" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void displayBase2() {
        cout << "Displaying from Base2" << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
// This derived class has acces of both base class member function
    void displayDerived() {
        // displayBase2();
        // displayBase1();
        cout << "Displaying from Derived" << endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase1(); // Accessing Base1's member function
    obj.displayBase2(); // Accessing Base2's member function
    obj.displayDerived(); // Accessing Derived's member function
    return 0;
}
