#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a = 45;
    // cout<<"The value of a was: "<<a<<endl;
    // a=4;
    // cout<<"The value of a is: "<<a<<endl;
    
    //***********Constants in C++***************
    // const int a = 45;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 4;  ---> this will give error as when we use constant functions the value of the given variable can't be change
    // cout<<"The value of a was: "<<a<<endl;


    //***********Manipulators in C++***************
    // There are two types of manipulators in C++ ---> 1. "endl"(use to change the line), 2."setw"(use to decide the width of any datatype)
    // setw is used in "<iomanip>" header file

    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<a<<endl;

    // cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;


    //***********Operator Precedence***************
    int a = 3, b = 4;
    // int c = (a*5)+b;  //here we r using operator precedence with means that if there r more than one operations then which operation
    // to be performed first(for that use operator precedence table in google)
    int c = ((((a*5)+b)-45)+87); //and associativity is used when operators have same precedence in that case we apply the case of
    // assoiciativity either left to right ot right to left
    cout<<c;
    return 0;
}