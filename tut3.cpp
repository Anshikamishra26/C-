// There are two types of header file in c++
// 1. System Hearder files: It comes with the compiler
#include<iostream>

// 2. User defined Header file: It is defined by the programmer
#include"this.h" //-->This will give error if this.h is not present in the current directory

using namespace std;
int main(){
    cout<<"This is a Hello World program";
    return 0;
}