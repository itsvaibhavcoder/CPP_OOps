#include <iostream>
using namespace std;
// Protected data member and member function are accesible in derived class (Child Class).
// Base class
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }
    
    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived class
class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);
    
    cout << "Area of the rectangle: " << rect.getArea() << endl;

    return 0;
}
