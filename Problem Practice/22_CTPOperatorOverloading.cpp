#include<iostream>
using namespace std;

class Complex{
    double real;
    double imag;
public:
    Complex (double r, double i): real(r), imag(i){}

    Complex operator+(const Complex &other){
        return Complex(real + other.real, imag +other.imag);

    }
    
    Complex operator-(const Complex &other){
        return Complex(real - other.real, imag- other.imag);

    }
    Complex operator*(const Complex &other){
        return Complex(real * other.real, imag *other.imag);

    }
     Complex operator/(const Complex& other) {
        return Complex(real / other.real, imag / other.imag);
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex a(3.0, 4.0);
    Complex b(1.5, 2.5);

    Complex c = a+b;
    Complex d = a - b;
    Complex e = a * b;
    Complex f = a / b;
    c.display();
    d.display(); 
    e.display(); 
    f.display(); 
    return 0;
}
