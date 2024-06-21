/*
    Copy Constructor :
        - A copy constructor is a special constructor in C++ that is used to
          create a new object as a copy of an existing object of the same class.
          It is often used when objects are passed by value, returned by value
          from a function, or when you explicitly create a new object as a copy
          of an existing one.
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Parametrised constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    // Copy Constructor
    Person(const Person &other)
    {
        name = other.name;
        age = other.age;
    }

    // Member function to display person's information

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Creating a Person object using the PC

    Person person1("vaibhav", 23);
    Person person2(person1);
    // Person person2 = person1;

    // Accessing the object's member function
    person1.displayInfo(); // Output: Name: Alice  Age: 25
    person2.displayInfo(); // Output: Name: Alice  Age: 25
    
    Person *person3 = new Person(person1);
    person3->displayInfo(); 
    return 0;
}