#include<iostream>
using namespace std;
class Complex{
    int a,b;

    public:
    Complex(int,int); //constructor declaration

    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
//defination of Constructor
Complex :: Complex(int x, int y){
    a=x;
    b=y;
}

int main(){
    Complex a(4,6); // Implicit call
    a.printNumber();
    Complex b = Complex(5,7); // Explicit function
    b.printNumber();
}
