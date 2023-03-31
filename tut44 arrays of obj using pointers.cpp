#include<iostream>
using namespace std;

class ShopItems{
    int id; 
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    ShopItems *ptr = new ShopItems[3];//This will allocate us the memory of 3 and give us place of the first memory then we've to move 
    //for further memory by using ptr++
    ShopItems *ptrTemp = ptr;//if we r using pointers in loop and we r doing ptr++ so it's not compulsary that after 3 it'll stop it'll keep
    //moving and start giving garbage values after 3 so to solve this ambiguity we r using another *ptrTemp which'll stop pointer after 3
    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}