#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int x , int y){
        a = x;
        b = y;
    }
    Complex(int x){
         a = x;
         b = 0;
    }

    void PrintData(){
        cout<<"The given complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    Complex c1(4, 6);
    c1.PrintData();

    Complex c2(9);//The output will get set acc to the given condition as here is only one value given it uses default value of b
    c2.PrintData();
    return 0;
}