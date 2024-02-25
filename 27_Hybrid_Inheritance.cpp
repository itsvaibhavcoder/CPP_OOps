#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Intermediate class inheriting from Animal
class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal breathes" << endl;
    }
};

// Intermediate class inheriting from Animal (protected inheritance)
class Bird : protected Animal {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

// Derived class inheriting from Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void flap() {
        cout << "Bat flaps" << endl;
    }
};

int main() {
    Bat bat;
    // bat.eat();    // Accessing member function from Animal through Mammal
    bat.breathe(); // Accessing member function from Mammal
    // bat.fly();    // Error: Cannot access fly() due to protected inheritance
    bat.flap();   // Accessing member function from Bat
    return 0;
}
