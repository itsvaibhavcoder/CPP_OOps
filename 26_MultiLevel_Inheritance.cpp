#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Intermediate Base class inheriting from Animal
class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal breathes" << endl;
    }
};

// Derived class inheriting from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();    // Accessing member function from Animal
    dog.breathe(); // Accessing member function from Mammal
    dog.bark();   // Accessing member function from Dog
    return 0;
}
