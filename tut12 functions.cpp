#include<iostream>
using namespace std;

//function prototype--->it tells the program about the existance of the function
//Syntax--> datatype function name(argument)
int sum(int a, int b); //--->Acceptable
//int sum(int a, b);//Not Acceptable
int sum(int, int); //Acceptable
void g(); //Acceptable
void g(void); //Acceptable

int main(){
    int n1, n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    //n1 and n2 are actual parameters
    cout<<"The sum is: "<<sum(n1, n2);
    g();
    return 0;
}
int sum(int a, int b){
    //formal parameters a and b will be taking values from the actual parameters n1 and n2
    int c = a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good Morning";
}

/*or*/
#include<iostream>
using namespace std;
int sum(int a, int b){// if we write function in the beginning then there is no need of function prototype
    int c = a+b;
    return c;
}

int main(){
    int n1, n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"The sum is: "<<sum(n1, n2);
    return 0;
}
