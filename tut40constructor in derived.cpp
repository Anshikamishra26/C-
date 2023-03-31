/*
Case1:
class B: public A{
    Order of execution of constructor--> first A() then B()
};

Case2:
class A: public B, public C{
    Order of execution of constructor--> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    Order of execution of constructor--> C() then B() and A()
};
*/

#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 constructor called!!"<<endl;
    }
    void printData1(void){
        cout<<"The value of data1 is: "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 constructor called!!"<<endl;
    }
    void printData2(void){
        cout<<"The value of data2 is: "<<data2<<endl;
    }
};
class Derived: public Base1, public Base2{
    int derv1, derv2;
    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derv1 = c;
        derv2 = d;
        cout<<"Derived constructor called!!"<<endl;
    }
    void printData3(void){
        cout<<"The value of derv1 is "<<derv1<<endl;
        cout<<"The value of derv2 is "<<derv2<<endl;
    }
};
int main(){
    Derived harry(1, 2, 3, 4);
    harry.printData1();
    harry.printData2();
    harry.printData3();
    return 0;
}