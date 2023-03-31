/*Sturctures, Union and enum*/
/*Structures are use to combine items with different datatypes*/
#include<iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eId;
//     float salary;
//     char favchar;
// };

// int main(){
//     struct employee harry;
//     harry.salary = 120000;
//     harry.eId = 1;
//     harry.favchar = 'c';
//     cout<<"The value is "<<harry.salary<<endl;
//     cout<<"The value is "<<harry.eId<<endl;
//     cout<<"The value is "<<harry.favchar<<endl;
    
    //or
    typedef struct employee //---->WE CAN USE typedef
{
    /* data */
    int eId;
    float salary;
    char favchar;
}ep;

int main(){
    ep harry; //--->WHEN WE USE typedef SO HERE WE CAN USE ep INSTEAD OF struct employee
    harry.salary = 120000;
    harry.eId = 1;
    harry.favchar = 'c';
    cout<<"The value is "<<harry.salary<<endl;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    
    return 0;
}

/*in structures if we r using suppose 3 datatypes so at that time we require space for all the 3 of them i.e. if we have 
int---> 4 bytes; char--> 1 byte and float---> 4 bytes so we require 9 bytes memory.
whereas in union we can use only one datatype at a time from all the three i.e. if int---> 4 bytes; char--> 1 byte and 
float---> 4 bytes so in union it provides us the space of largest byte in all three of them i.e. 4 bytes
ex--> if we want to print int it takes 4 bytes of memory but then we want to print char so it will overwrite int and takes 
only 1 byte of memory and get print.(basically union prints one datatype at a time and is used for better memory allocation
as wastage of memory is prevented)*/


union money 
{
    /* data */
    int rice;
    float pound;
    char car;
};

int main(){
    // union money m1;
    // m1.rice = 200;
    // m1.car = 'c';---> //This will gives us garbage value bcoz we can run only one item at a time if we want the value of car change
    //                   // cout<<m1.car instead of rice
    // cout<<m1.rice;
    

    enum Meal{breakfast, lunch, dinner};//---> enum is use to give the position of the given item
    Meal m1 = lunch;
    cout<<(m1==2);//---> this will give 0 as a output as the position of lunch is 1 so the cond is false i.e. 0
    /*or*/
    cout<<breakfast<<endl;//--->This will give the position of breakfast i.e. 0
    cout<<lunch<<endl;//--->This will give the position of lunch i.e. 1
    cout<<dinner<<endl;//--->This will give the position of dinner i.e. 2
    return 0;
}
    