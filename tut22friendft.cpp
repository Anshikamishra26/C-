#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n1;
    }
    friend Complex sumComplex(Complex o1, Complex o2);//these ft are used to take permission from the class to use its private data
    void printData(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b +o2.b));//this will give an error as a and b are private ft and we're using it here without any permission
    //and in that case friend ft are used
    return o3;
}

int main()
{
    Complex c1, c2, num;
    c1.setData(1, 3);
    c1.printData();

    c2.setData(4, 1);
    c2.printData();

    num = sumComplex(c1, c2);
    num.printData();
    return 0;
}

/*Properties of friend function
1. Not in the scope of the class
2.since it is not in the scope of the class ,it cannot be called from the object of that class. c1.sumComplex() == invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access memebers directly by their names and need object_name.member_name to access any member*/