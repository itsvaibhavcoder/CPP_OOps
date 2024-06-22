/*
    Private Access Modifier:
        Members declared as private are not accessible from outside the class, 
        even in derived classes.
        Private members are used to encapsulate the internal implementation details and protect them from external interference.
*/

#include<iostream>
using namespace std;

class MyClass{
    private:
    int privateVar;
    public:
    //setter method
    void setPrivateVar(int val){
        privateVar = val;
    }
    
    // getter method
    int getPrivateVar(){
        return privateVar;
    }
};

int main(){
    MyClass obj;
    obj.setPrivateVar(42);
    int val = obj.getPrivateVar();
    cout<<val<<endl;
    return 0;
}