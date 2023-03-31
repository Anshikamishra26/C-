#include<iostream>
using namespace std;
int c = 45;
int main(){
    // ***********************Build in DataTypes***************************
    // int a, b, c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The value of global c is: "<<::c; //"::" is called scope resolution operator which is used to print global value
    
    // ***********************Float, double and long double literals***************************
    // float d = 3.4F;    /*if  we write only "3.4" in the code so by default it will consideres as double....if we wanna specify that
    // long double e = 3.4L;  the number is float in that case we use "F/f" and for long double we use "L/l"\*
    // cout<<"The value size of 3.4 is: "<<sizeof(3.4)<<endl;
    // cout<<"The value size of 3.4F is: "<<sizeof(3.4F)<<endl;
    // cout<<"The value size of 3.4f is: "<<sizeof(3.4f)<<endl;
    // cout<<"The value size of 3.4L is: "<<sizeof(3.4L)<<endl;
    // cout<<"The value size of 3.4l is: "<<sizeof(3.4l)<<endl;

    // ***********************Refernce Variables***************************
    // Rohan ----> Monty ----> Rohu ----> Dangerous Coder    same person with different names  in C++ in we wanna the same concept
    // we use "&" in that case

    // float x = 45;
    // float & y = x;
    // cout<<"The value of x is: "<<x<<endl;
    // cout<<"The value of y is: "<<y<<endl;


    //***********************TypeCasting***************************
    int a = 45;
    int b = 45.46;
    cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of a is: "<<(float)a<<endl;

    cout<<"The value of b is: "<<int(b)<<endl;
    cout<<"The value of b is: "<<(int)b<<endl;
    int c = int(b);
    cout<<"The expression is: "<<a + b<<endl;
    cout<<"The expression is: "<<a + int(b)<<endl;
    cout<<"The expression is: "<<a + (int)b<<endl;
    return 0;
}