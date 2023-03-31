#include<iostream>
using namespace std;
class Flight{
    int tic;
    float price;
    public:
    void setData(int t, float p){
        tic = t;
        price = p;
    }
    void getData(){
        cout<<"your ticket no is "<<tic<<endl;
        cout<<"price is "<<price<<endl;
    }
};
int main(){
    int size = 3;
    Flight *ptr = new Flight[3];
    Flight *ptrTemp = ptr;
    int a, i;
    float b;
    for (i = 0; i < size ; i++)
    {
        cout<<"enter no of tickets and their price"<<i+1<<endl;
        cin>>a>>b;
        ptr->setData(a, b);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
       cout<<"Ticket no"<<i+1<<endl;
       ptrTemp->getData();
       ptrTemp++;
    }
    
    
    return 0;
}