//#include is a preprocessor directive----> means it refer to the file/library (<iostream>) which ever we include before writing our code
//for eg: suppose when we include "cout" to our program so how cout works what is it's code all these things are present in a library
//called <iostream>
#include<iostream>
using namespace std;

// int main(){
//     std::cout<<"Hello World";
//     return 0;
// }

int main(){
    string hello = "Hello";
    string world = "world!";
    string msg = hello + " "+ world;
    cout<<msg<<endl;
    msg[0]<< 'h';
    cout<<msg<<endl;
   
    return 0;
}