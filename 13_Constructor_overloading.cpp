#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
     //Here we creating multiple constructor with different parameters, the constructor is executed which matches with parameter values this concept is called contructor overloading
    //Creating new constrcutor
    //Parametrised Constructor
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
     // Parametrised constructor with single parameter one is default parameter
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    //Default constructor
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c(4, 5);
    c.printNumber();
    Complex b(4);
    b.printNumber();
    Complex d;
    d.printNumber();
    return 0;
}