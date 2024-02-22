#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
    int wheels;
    string name;
    string model;

public:
    // n1 = 4 default argument 
    Car(int n1=4, string n2, string n3)
    {
        wheels = n1;
        name = n2;
        model = n3;
    }
    void getData()
    {
        cout << "The car " << model << " of company " << name << " has " << wheels << " wheels." << endl;
    }

    void drive()
    {
        cout << "Driving" << endl;
    }
};
int main()
{
    Car car1(4, "ford", "mustang");
    car1.getData();
    car1.drive();
    return 0;
}