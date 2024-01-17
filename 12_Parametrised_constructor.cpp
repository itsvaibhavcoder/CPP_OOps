#include<bits/stdc++.h>
using namespace std;

class Point{
    int x,y;
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }

    void display(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};

int main(){
    Point p(1,1);
    p.display();
    Point q(4,6);
    q.display();

    return 0;
}