#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    //Creating a constructor
    //Constructor is a special member function with the same name as that of class
    //It is used to initialize the object of its class
    //It is automatically invoked(call) whenever the object is created 
    //it does not have any return type also doesn't have any input parameter


    Complex(void); //Constructor declaration
    void PrintData(){
        cout<<"The given complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void)//This is a default constructor as it accepts no parameter
{
    a = 10;
    b = 20;
} 
int main(){
    Complex c;
    c.PrintData();
    return 0;
}

/*
Characteristics of Constructor
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created in the class
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/