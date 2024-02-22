#include<bits/stdc++.h>
using namespace std;
// In case of protected access modifires protected data members and member function are accesible by it own function and base call.
class Car{
    protected:
    int wheels;

    private:
    void drive(){
        cout<<"Driving"<<endl;
    }
};
// Creating base class of parent class Car

class mercedese : public Car{
    public:
    int getWheels(){
        return wheels;
    }
};

int main()
{
 Car c1;
 
//   c1.wheels = 4; // Throw error
//   c1.drive(); // Throw error
 return 0;
}