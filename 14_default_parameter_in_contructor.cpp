#include<bits/stdc++.h>
using namespace std;
class Simple{
    private:
    int data1, data2;
    
    //Creating constructor
    public:
    Simple(int x, int y=12){
        data1=x;
        data2 =y;
    }
    public:
    void printData();
};
void Simple :: printData(){
    cout<<"The value of data1 and data1 is "<<data1<<" and "<<data2<<endl;
}
int main()
{
Simple s(2,3);
s.printData();
Simple t(10);
t.printData();
 return 0;
}