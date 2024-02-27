#include <iostream>
using namespace std;
// Function Overloading -- Function can have different number of parameters and data types but same name.  And which function will be called is decided at compile time
class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main(){
    // Function Overloading
    Calculator calc;
    cout << "Sum of 5 and 7 is: " << calc.add(5, 7) << endl;
    cout << "Sum of 2, 3, and 4 is: " << calc.add(2, 3, 4) << endl;
    cout << "Sum of 2.5 and 3.7 is: " << calc.add(2.5, 3.7) << endl;
}