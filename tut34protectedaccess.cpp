#include<iostream>
using namespace std;

class Base{
    protected: //---> it's just like the private members the only difference is we can inherit the
    // protected members but not the private one....means child class can easily access the data members
    //of protected class but not of private class and protected members are also accessible inside their
    //own class
    int a;
    private:
    int b;   
};
class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    //cout<<d.a; ---> Will not work since a is protected in both base as well as derived class
    return 0;
}

/*                  Public Derivation             Private Derivation          Protected Derivation
Private Members     Not Inherited                 Not Inherited               Not Inherited
Protected Members   Protected                     Private                     Protected
Public Members      Public                        Private                     Protected
*/