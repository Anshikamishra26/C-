#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
    void process();
    void display();
};

void Derived :: process(){
    data3 = data2 * getData1();
}
void Derived :: display(){
    cout<<"The value of data 1 is "<<getData1()<<endl;//we've to print getData1 here because data1 is the private
    //member of the class so we can't call it directly...we can call it  by using function getData1
    cout<<"The value of data 2 is "<<data2<<endl;
    cout<<"The value of data 3 is "<<data3<<endl;
}
int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}