#include<iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE, TWO OR MORE THAN TWO)--->in previous ex we use template and use only one datatype at a time
but if we want to use multiple datatype at a time then use this conceptaZzqa
SYNTAX
template<class T1, class T2....> (COMMA SEPERATED)
class nameOfClass{
    //body
}
*/

// class myClass{
//     public:
//     int data1;//In general we use this for multiple datatypes but in casr we want to change the datatype after making program like we
//     //want now float instead of int so in that case we use concept of multiple function
//     char data2;
//     void display(){
//         cout<<this->data1<<endl<<this->data2;
//     }
// };

template<class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
    myClass<int, char> obj(1, 'c');//In case we want to change the datatype we can change it here
    obj.display();
    return 0;
}