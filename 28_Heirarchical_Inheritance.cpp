#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Derived class 1 inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2 inheriting from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.eat();  // Accessing member function from Animal through Dog
    dog.bark(); // Accessing member function from Dog

    cat.eat();  // Accessing member function from Animal through Cat
    cat.meow(); // Accessing member function from Cat

    return 0;
}
