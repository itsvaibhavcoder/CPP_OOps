#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l, int b){
          length = l;
          breadth = b;
    }

    int calculate_area(){
        return length * breadth;
    }
};

int main(){
    int l,b;
    cin>>l>>b;

    Rectangle rect(l,b);
    cout<<rect.calculate_area()<<endl;

    return 0;
}
