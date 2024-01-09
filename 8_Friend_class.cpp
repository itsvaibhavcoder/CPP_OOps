#include <iostream>
using namespace std;

class Complex;

class Calculator {
public:
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex {
    int a, b;

    // Declaring the entire Calculator class as a friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}

int main() {
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the real parts of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of the imaginary parts of o1 and o2 is " << resc << endl;
    return 0;
}
