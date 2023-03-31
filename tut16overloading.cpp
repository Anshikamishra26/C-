#include<iostream>
using namespace std;
/*Ft Overloading means to perform multiple tasks by using same name of the function*/
int sum(int a, int b){
    cout<<"Using 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using 3 arguments"<<endl;
    return a+b+c;
}

//Calculate volume of cylinder
int volume(int r, int h){
    return(3.14 * r * r * h);
}
//Calculate volume of cube
int volume(int r){
    return(r * r * r);
}
//Calculate volume of rectangle
int volume(int l, int b, int h){
    return(l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<"The volume of cylinder is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of rectangle is "<<volume(3, 6, 7)<<endl;
    return 0;
}