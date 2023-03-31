# include<iostream>
using namespace std;

// use of global variable is a BAD PRACTICE.....as any function can easily update global variable and that change will get reflected 
//everywhere in a program so whenever we want to share a variable simply use REFERENCE VARIABLE
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 9;
    glo = 78;
    int a = 4;
    int b = 5;
    sum();
    cout<<glo;
    cout<<"This is tut 4.\n here the value of a is "<<a<<"\n The value of b is "<<b;
    return 0;
}