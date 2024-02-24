#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

// Public inheritance
class Derived_Public : public Base {
    // publicVar remains public
    // protectedVar remains protected
    // privateVar is not accessible
};

// Protected inheritance
class Derived_Protected : protected Base {
    // publicVar becomes protected
    // protectedVar remains protected
    // privateVar is not accessible
};

// Private inheritance
class Derived_Private : private Base {
    // publicVar becomes private
    // protectedVar becomes private
    // privateVar is not accessible
};

// If you want to access private data member in Inheritance you can create method to get data and acceess these by publically or protected ---- we can only read the that data member cannot change them

int main() {
    Derived_Public d1;
    d1.publicVar = 10; // Okay
    // d1.protectedVar = 20; // Error
    // d1.privateVar = 30; // Error

    Derived_Protected d2;
    // d2.publicVar = 10; // Error
    // d2.protectedVar = 20; // Error
    // d2.privateVar = 30; // Error

    Derived_Private d3;
    // d3.publicVar = 10; // Error
    // d3.protectedVar = 20; // Error
    // d3.privateVar = 30; // Error

    return 0;
}