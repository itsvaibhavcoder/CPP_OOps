#include<bits/stdc++.h>
using namespace std;
// For accesing private data members we used getter and setter methods.

class Car{
    //This Data members and member functions are not be accesible out side the class they only accessible by Car class functions.
    private:
    int wheels;
    public:
    void setWheels(int n){
        wheels = n;
    }
    
    void getWheels(){
        cout<<wheels<<endl;
    }
    private:
    void drive(){
        cout<<"Driving";
    }
    //For accesing the private function we can create the public function and call the private function inside that function and we can easily use public function anywhere.
    public:
    void state(){
        drive();
    }
};

// class vehicle{
//     public:
//     void call(){
//         Car c1;
//         c1.drive(); // this will throw error
//     }
// };

int main(){
    Car c1;
    c1.setWheels(4);
    c1.getWheels();
    c1.state();
    // c1.wheels = 4; // this will throw error
    // c1.drive();    // this will throw error
}

