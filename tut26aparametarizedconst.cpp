#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    

    Complex(int, int); //Constructor declaration
    void PrintData(){
        cout<<"The given complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x, int y)//This is a parametarized constructor as it accepts 2 parameter
{
    a = x;
    b = y;
} 
int main(){
    //Implicit call
    Complex a(4, 6);

    //Explicit call
    Complex b = Complex(5, 7);

    a.PrintData();
    b.PrintData();
    return 0;
}