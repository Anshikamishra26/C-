#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAvereage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }--->Instead of making that much functions we can simply make template for function and use it for many datatypes

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a = funcAverage(5, 2);
    printf("The average of these number is %.3f\n", a);//-->we can use printf instead of cout in cpp and %.3f is use to readuce precision
    int x = 5, y = 7;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}