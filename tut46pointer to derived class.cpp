#include<iostream>
using namespace std;
/*Compile time polymorphism:
code will run using:
1. function overloading
2. operator overloading
in which ---> which ft will is called is decided before the runtime


Run time polymorphism:
Code will run using VIRTUAL FUNCTIONS:
in which -->which function will be called will get decided during the runtime 
or compiler which binds the ft or associate the object from function's address will be done during runtime*/
class Base{
    public:
    int var_base;
    void Display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};
class Derived : public Base{
    public:
    int var_derived;
    void Display(){
        cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
    }
};
int main(){
    Base  * base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;// Pointing base class pointer to derived class object--->if we run the "Dispaly" ft, the display ft of
    //the base class will get executed because the pointer is of base class so it'll run all the methods/functions which gets inherited
    //from the base class only
    base_pointer->var_base = 34;
    // base_pointer->var_derived = 134;---> will throws an error because we can't execute the methods/ft's of derived class
    base_pointer->Display();

    base_pointer->var_base = 3400;
    base_pointer->Display();

    Derived * derived_pointer;
    derived_pointer = &obj_derived;//Now this pointer will run the methods/functions inherited from the derived class
    derived_pointer->var_derived = 98;
    derived_pointer->Display();
    return 0;
}