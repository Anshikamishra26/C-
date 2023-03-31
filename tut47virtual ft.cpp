#include<iostream>
using namespace std;

class Base{
    public:
    int var_base =1;
    virtual void Display(){ //we created a pointer of var_base which is pointing towards obj of derived class but will inherit all the 
    //methods of base class only but if we wanna display the methods of derived class by using same syntax in that case we use virtual
    //functions as by using this we can easily inherit the methods of derived class by making the pointer of base class which is
    //pointeg towards the obj of derived class
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};
class Derived : public Base{
    public:
    int var_derived =2;
    void Display(){
        cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
    }
};
int main(){
    Base  * base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;using namespace std;
    base_pointer->Display();
    return 0;
}