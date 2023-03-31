#include<iostream>
using namespace std;
int main(){
    //Basic Example
    int a = 4;
    int* ptr = &a;
    *ptr = 999;//this will change the value of a from 4 to 999
    cout<<"Theb value of int a is "<<*(ptr)<<endl;


    //new keyword
    // int *p = new int(4); or
    // float *p = new float(40);//that means we r allocating memory of 1 float to store the object
    // cout<<"The value at address p is "<<*(p)<<endl;

    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20; or we can write it as *(arr+1) = 20; both convey same meaning
    // arr[2] = 30;
    // cout<<"The value of arr[0] is: "<<arr [0]<<endl;
    // cout<<"The value of arr[1] is: "<<arr [1]<<endl;
    // cout<<"The value of arr[2] is: "<<arr [2]<<endl;

    //delete keyword
    int *arr = new int[3];//that means we r allocating memory of 3 integers in array to store the object
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;//by usnig this keyword we get the random values of arrs i.e. it may give the correct values or can give the garbage values
    cout<<"The value of arr[0] is: "<<arr [0]<<endl;
    cout<<"The value of arr[1] is: "<<arr [1]<<endl;
    cout<<"The value of arr[2] is: "<<arr [2]<<endl;
    return 0;
}