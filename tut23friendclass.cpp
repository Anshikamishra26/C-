#include<iostream>
using namespace std;

//Forward declaration
class Complex;//if we r using class complex in class calculator so compiler must know that there is any class called complex exists

class Calculator{
    public:
    int add(int a, int b){
        return (a + b);
    }
    //Individually Declaring ft as a friend
    int sumRealComplex(Complex, Complex);
    //return(o1.a + o2.b); this will give an error bcoz "a" is a variable of class complex and during the time of compilation compiler doesn't
    //know weather 'a' exists in a class complex or not as it checks class calculator first . So we use this expression further
    int sumCompComplex(Complex, Complex);

    //Aliter: Declaring ft as a class so that all the functions of that class will become friend of that class
    // friend class Calculator;
};    
class Complex{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex, Complex);
    friend int Calculator :: sumCompComplex(Complex, Complex);
    public:
    int setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return(o1.a + o2.b);
}
int Calculator :: sumCompComplex(Complex o1, Complex o2){
    return(o1.b + o2.b);
}
    
int main(){
    Complex o1, o2;
    o1.setNumber(1, 2);
    o2.setNumber(2, 3);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout<<"The sum of the real part of o1 and o2 is "<<res<<endl;
    int resC = calc.sumCompComplex(o1, o2);
    cout<<"The sum of the Complex part of o1 and o2 is "<<resC<<endl;
    return 0;
}