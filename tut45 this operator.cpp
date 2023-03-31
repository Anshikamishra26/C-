#include<iostream>
using namespace  std;

class A{
    int a;
    public:
    void setData(int a){
        //a = a; if we do this the program will give no error but it gives the garbage value of a instead og giving the value that we set
        //so to solve this ambiguity we uses "THIS" operator
        this->a = a;//now it'll give the value of a that we give also it is used to return the object of class
    }
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
    }
};
int main(){
    //"this" is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData(); 
    return 0;
}

// class A{
//     int a;
//     public:
//     A & setData(int a){ ---->This is how we return the object using reference variable and using "this" 
//         this->a = a;
//         return *this;
//     }
//     void getData(){
//         cout<<"The value of a is: "<<a<<endl;
//     }
// };
// int main(){
//     //"this" is a keyword which is a pointer which points to the object which invokes the member function
//     A a;
//     a.setData(4).getData(); --->Since we r returning the value of obj so setData contains the object so, we can also write it in this manner
//     return 0;
// }


