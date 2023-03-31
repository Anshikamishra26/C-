#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"Hey all"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Wassup"<<endl;
    }
};
class Derived : public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base1::greet();//if both classes ft has same name then the ft of derived class get confused that which ft have to run
        //so in that case we use ambiguity resolution method my writing it in this this way
    }
};
class B{
    public:
    void say(){
        cout<<"Nothing Special"<<endl;
    }
};
class D: public B{
    int a;
    //D's new say() method will override base class's say() method and in case D's say() is not there then it'll get inherited from B's say()
    public:
    void say(){
        cout<<"everthing Special"<<endl;
    }
};
int main(){
    //Ambiguity 1
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived der;
    der.greet();

    //Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}