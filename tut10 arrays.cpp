/*Arrays are used to combine the items with same datatype*/


#include<iostream>
using namespace std;
int main(){
    int marks[4] = {23, 44, 32, 12};
    int mathsmarks[] = {25, 67, 89, 99};
    cout<<"these are mathsmarks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;

    marks[2]=98;  //You can change the value of array
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;



    //We can print the array using loop also
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    //arr is the address of the first memory block present in an array
    int arr[10] = {22, 33, 25, 16};
    // both gives the same output
    // cout<<"the address of the first memory block "<< arr <<endl;
    // cout<<"the address of the first memory block "<< &arr[0] <<endl;

    // cout<< "Zeroth position value" << *arr<<endl;
    
    // //this will also work
    // int i = 3;
    // cout<< i[arr] <<endl;

    //if we use sizeof() than array = size*4 and pointer will be of 8 bytes
    // int temp[10];
    // cout<<sizeof(temp)<<endl;//address at 0th position ka size
    // cout<<sizeof(*temp)<<endl;//value at 0th loc ka size
    // cout<<sizeof(&temp)<<endl;//add at 0th loc ka size

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl; //gives size of value that is at the 0th position i.e. 4
    // cout<<sizeof(&ptr)<<endl; //gives the address at ptr that is 8

    // int arr[10];
    // //arr = arr +1 --> gives error as it is already assigned to some address and symbol mapping cannot be changed

    // //will not give an error bcoz its like if we do ptr+1 it will shift to next position if it is in 710 position it will shift to 714
    // int *ptr=&arr[0];
    // cout<< ptr << endl;
    // ptr =ptr+1;
    // cout<< ptr << endl;

  //**************************************IMP**********************************************
    //here we're storing a value to the temperary memory and then we're pointing with the pointer which is very RISKY
    //suppose   IF there is a ROM and INCREMENT krte krte we reach to that memory than it's gonna be very RISKY
    // char *c= "abcde"---> not acceptable


    //here we're doing that we're storing "abcde" to the temperary memory hen we're copying it to the memory alloted to ch i.e. ch[6]
    char ch[6]= "abcde";
    cout<< ch <<endl;//this will not give the address of an array instead it gives 'abcde' that means implementation of the cout for int 
    // ans char array will be different

    char *c = &ch[0];
    //print the entire string abcde
    cout<< c << endl;

    char temp = 'z';
    char *p = &temp;
    //it start printing array from temp until the null character
    cout<< p <<endl;


 

    //Pointers and array
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    /*or*/
    cout<<"The value of *p is"<<*p<<endl;
    // cout<<"The value of *p+1 is"<<*p+1<<endl; value at 0th loc + 1
    cout<<"The value of *(p+1) is"<<*(p+1)<<endl;//value at first location
    cout<<"The value of *(p+2) is"<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is"<<*(p+3)<<endl;
    return 0;
}


