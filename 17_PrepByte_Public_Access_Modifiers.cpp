#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    int wheels;
    string name;

    public: // Access modifiers are public so we can use this member function anywhere.
    void wheelCheck(){
        cout<<"Wheels are in good Conditions"<<endl;
    }
    void drive(){
        cout<<"Driving"<<endl;
    }

};

// we can access this methods in another class also
class vehicle{
    public:
    // we can acces this method 
    void call(){
        Car c1;
        c1.drive();
    } 
};
int main(){
  // Directly used in this main method
  Car c1;
  c1.wheels = 4;
  c1.name = "Ciaz";
  cout<<c1.wheels<<endl;
  cout<<c1.name<<endl;
  c1.wheelCheck();
  vehicle v1;
  v1.call();
}