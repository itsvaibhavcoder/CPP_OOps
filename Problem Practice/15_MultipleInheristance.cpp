#include<iostream>
using namespace std;

class Base1 {
public:
    int data1;
};

class Base2 {
public:
    int data2;
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "Data1: " << data1 << "\n" << ", Data2: " << data2 << endl;
    }
};

int main() {
   
    Derived derivedObj;
    derivedObj.data1 = 42;
    derivedObj.data2 = 24;
    derivedObj.display(); 
    return 0;
}
