/*
Syntax for initialization list in constructor:
constructor(argument-list): initialization-section{
    assignment + other code;
}*/

#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
    //Different ways to write initialization section
    // Test(int i, int j): a(i), b(j)
    // Test(int i, int j): a(i), b(i+j)
    // Test(int i, int j): a(i), b(2 * j)
    // Test(int i, int j): a(i), b(a+j)
    // Test(int i, int j): b(j), a(i+b) --> RED FLAG this will create problems because a will be initialized first as we've declared int a 
    //first
    //Test(int i, int j): a(i){
    //     b = j;
    // }
    Test(int i, int j){
        a = i;
        b = j;
        cout<<"Constructor executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main(){
    Test t(4, 6);
    return 0;
}