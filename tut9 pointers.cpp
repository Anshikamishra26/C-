#include<iostream>
using namespace std;
int main(){
    //What is Pointers --->DataType which holds the address of other data types
    //pointer always have values of 8 bytes(sometimes maybe 4 bytes)
    int a = 3;
    int* b; //---> This is how we denote pointers
    b = &a; // "&"---> (Address of) operator tells us the address of a variable also known as "ampersand"
    cout<<"The address of a is "<<&a<<endl; //Both will give the same output
    cout<<"The address of a is "<<b<<endl;   


    // * ---> (Value at)Deference operator
    cout<<"The value at address a is "<<*b<<endl; //give 3 as output


    //Pointers to Pointers
    int** c = &b; //it contains address of b
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl; //This will give the value at address c that is value of b
    cout<<"The value at address value_at(value_at c) is "<<**c<<endl; //This will give the value of a that is 3
    return 0;
}

/*int i=5;

both will give the same ans
int *q = &i;

int *p=0;
p=&i;

*/