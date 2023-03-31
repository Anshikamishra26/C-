#include<iostream>
using namespace std;

template <class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data = a;
    }
    void display();
};
//We can use scope resolution operator here as we did earlier
template <class T>
void Harry<T> :: display(){
    cout<<data;
}

//Here we can overload the template by normal function like exact match can overload the template function
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main(){
    // Harry<float> h(5.7);
    // Harry<char> h('c');
    // Harry<int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    //func(4); //Exact match takes the highest priority here func(int a) matches exactly than the template func
    func1(4);
    return 0;
}