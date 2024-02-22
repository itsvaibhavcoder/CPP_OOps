#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
    int wheels;
    string name;
    string model;

public:
    Car(int n1, string n2, string n3)
    {
        wheels = n1;
        name = n2;
        model = n3;
    }
    Car(const Car &car1)
    {
        this->wheels = car1.wheels;
        this->name = car1.name;
        this->model = car1.model;
    }
    void getData()
    {
        cout << "The car " << model << " of company " << name << " has " << wheels << " wheels." << endl;
    }
};

int main()
{
    Car car1(4, "ford", "mustang");
    Car car2 = car1; // Copy constructor
    car2.getData();
    return 0;
}
