#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void getData(){
        cout<<"The value of the real part is "<<real<<endl;
        cout<<"The value of the imaginary part is "<<imaginary<<endl;
    }
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    // Complex c1; 
    // Complex *ptr = &c1; or
    Complex *ptr = new Complex;
    // (*ptr).setData(4, 55); is exactly same as
    ptr->setData(4, 55);//-> this is called the arrow operator which can be used instead of pointer
    // (*ptr).getData(); is as good as
    ptr->getData();

    //Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(4, 50);
    ptr1->getData();
    return 0;
}