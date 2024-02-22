#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
    int wheels;
    string name;
    string model;

public: // Constructor should be written with public access modifiers
     // Default Constructor
     // 1) Constructor has same name of clss
     // 2) Not has any return type
     // 3) Can be overloaded
     // 4) Three types default, parametrised and copy constuctor
     // 5) Initialized or called when object is created 
     // 6) Can be declared inside or outside of the class

    // Car(){
    //     wheels = 4;
    //     name = "ford";
    //     model = "mustang";
    // }
    Car();  // Declare constuctor here and can be define outside of the class.
    // we can use initializer list to initialize constructor
    // Car() : wheels(4), name("Ford"), model("Mustang") {}

    void getData(){
        cout<<"The car "<<model<<" of company "<<name<<" has "<<wheels<<" wheels."<<endl;
    }
    void drive()
    { 
        cout<<"Driving"<<endl;
    }
};

Car :: Car(){
     wheels = 4;
     name = "ford";
     model = "mustang";
}

int main()
{
    // Create the object of class
    Car car1;
    car1.getData();
    car1.drive();
    return 0;
}