#include<iostream>
using namespace std;

class Person {
    public:
    int age;
    string name;
    
    Person(int age, string s) {
        this->age = age; // Use this->age to refer to the member variable
        this->name = s;  // Use this->name to refer to the member variable
    }

    void introduce() {
        cout<<"Hello I am "<<name<<" and my age is "<<age<<endl;
    }
};

int main() {
    Person p(24, "vaibhav");
    p.introduce();

    // Person* p = new Person(24, "vaibhav"); // Dynamically allocate memory for a Person object
    // p->introduce(); // Use the arrow operator to call the introduce method

    // delete p; // Free the allocated memory
}
