// 1) Object-Oriented programming Recap
// 2) Stroustrup initially named C++ language as C with classes because C++ language was almost the same as C language but they added a new concept of classes in it.
// 3) Classes are the extension of structures in C language.
// 4) Structures had limitations such as; members are public and no methods.
// 5) Classes have some additional futures than structures such as; classes that can have methods and properties.
// 6) Classes have a feature to make class members as public and private.
// 7) In C++ objects can be declared along with class deceleration as shown in Code Snippet 1.
// class Employee{
//             // Class definition
// } harry, rohan, lovish;

#include<bits/stdc++.h>
using namespace std;

class binary {
    string s; // Private member string to store binary number

    // Private member function to check if the input is a binary number
    void chk_bin(void) {
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) != '0' && s.at(i) != '1') {
                cout << "Incorrect binary format" << endl;
                exit(0);
            }
        }
    }

public:
    // Public member functions
    void read(void); // Function to read binary number
    void ones_complement(void); // Function to calculate one's complement
    void display(void); // Function to display binary number
};

// Definition of read function
void binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

// Definition of ones_complement function
void binary::ones_complement(void) {
    chk_bin(); // Call private function to check binary format

    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        } else {
            s.at(i) = '0';
        }
    }
}

// Definition of display function
void binary::display(void) {
    cout << "Displaying your binary number: " << s << endl;
}

int main() {
    binary b; // Creating an object of binary class

    b.read(); // Read binary number from the user
    b.display(); // Display the original binary number
    b.ones_complement(); // Calculate and display one's complement of the binary number
    b.display();

    return 0;
}
