#include<bits/stdc++.h>
using namespace std;

// Class declaration
class employee {
private:
    int a, b, c; // Private member variables

public:
    int d, e; // Public member variables

    // Function to set private member variables
    void setData(int a, int b, int c); // Function declaration

    // Function to display all member variables
    void getData() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;
        cout << "e: " << e << endl;
    }
};

// Definition of setData function
void employee::setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    employee vaibhav; // Creating an object of employee class

    // Setting public member variables directly
    vaibhav.d = 45;
    vaibhav.e = 67;

    // Using the setData function to set private member variables
    vaibhav.setData(40, 57, 90);

    // Displaying all member variables using the getData function
    vaibhav.getData();

    return 0;
}
