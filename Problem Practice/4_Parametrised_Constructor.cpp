#include<iostream>
#include<string>

using namespace std;
class Person{
private:
  string name;
  int age;

  public:
  //Parametrised constructor

  Person(string n, int a){
    name = n;
    age = a;
  }

  // Member functiont to display person's info.

  void displayInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
  }

};

int main(){
    // Creating a person object using the parametrised constructor

    //Person person1("vaibhav", 23);
    //person1.displayInfo();

   Person *person1 = new Person("vaibhav", 23);
   person1->displayInfo();
   delete(person1); //For cleaning memory
   return 0;
}