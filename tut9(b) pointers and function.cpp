#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p <<endl;
}

void update(int *p){
    //p = p+1;
    //cout<< p <<end;---> this will update the address

    *p=*p+1;//---> This will upadte the value of p
}

void Ptr(int **p2){
    //p2 = p2+1; //no changes in the valie of i as it will only update the address

   // *p2 = *p2+1;//this will update the address of p as *p2 means the value present at address pointed by p2 
    **p2 = **p2+1;//this will update the value of i

}

int getSum(int arr[], int n){

    /*this will give the size = 8 that is size of pointer that means when we passes an array inside a ft ....so the array is not passes
    that is actually a pointer 
    int getSum(int *arr, int n)--->this is same as the above written method
    when there passed a pointer its benefit is that we can easily send/pass a part of array that means if getSum(arr) means 
    sum of array from the begnning (arr[0])....but if we write getSum(arr+3, 3) it'll gives us last ke 3 digits ka sum..in that way
    we can pass a part of an array*/
    cout<<endl<< "Size : "<<sizeof(arr)<<endl;
    int sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){

    int i = 5;
    int *p = &i;
    int** p2 = &p;
    print(p);

    cout<<"Before"<< p <<endl;
    update(p);
    cout<<"After"<< p <<endl;//after and before will give the same value as in case of int it'll just update position if address in 0 then 
    //adress will be updated to 4

    //wil update the value
    cout<<"Before"<< *p <<endl;
    update(p);
    cout<<"After"<< *p <<endl;


    cout<<"Before"<< i <<endl;
    cout<<"Before"<< p <<endl;
    cout<<"Before"<< p2 <<endl;
    Ptr(p2);
    cout<<"After"<< i <<endl;
    cout<<"After"<< p <<endl;
    cout<<"After"<< p2 <<endl;


    int arr[5] = {1,2,3,4,5};

    cout<<"Sum is "<<getSum(arr,5)<<endl;
    return 0;
}