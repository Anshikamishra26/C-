#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;
int main(){
    //Function objects(functor) : Function wrapped in a class so that it available like an object
    int arr[] = {1, 73, 4, 2, 54, 16};
    sort(arr, arr+5);//This will sort an array in ascending order upto 5th element(i.e. 54)
    sort(arr, arr+6, greater<int>());//This will sort an array in descending order upto 6th element(i.e. 16)
    for(int i = 0; i<6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}