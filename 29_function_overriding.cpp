#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void draw(){
        cout << "Drawing a shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    // Override draw function for Circle
    void draw(){
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    // Override draw function for Square
    void draw() {
        cout << "Drawing a square." << endl;
    }
};

// Function template for compile-time polymorphism
template<typename T>
void drawShape(const T& shape) {
    shape.draw();
}

int main() {
    Circle circle;
    Square square;
    circle.draw();
    square.draw();

    return 0;
}
