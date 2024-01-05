#include<bits/stdc++.h>
using namespace std;
// create a class of shop 
class shop{
    private:
    
    int ItemId[100];
    int ItemPrice[100];
    int counter;

    public:
    void setPrice(void);
    void displayPrice(void);
    void InitCounter(void){
        counter=0;
    }

};
void shop :: setPrice(void){
    cout<<"Enter Id of your item no "<< counter+1<<endl;
    cin>>ItemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>ItemPrice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with Id "<<ItemId[i]<<" is "<< ItemPrice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.InitCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}