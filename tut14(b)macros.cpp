#include<iostream>
using namespace std;

// #define---->this is how we define Macros
//Macro is a peiece of code in a program that is replaced by value of Macro

//macro is created.....as macro is not a variable so it does not take any memory....we're just replacing before compile time...and
//it's not gonna change
#define PI 3.14
int main(){
    int r = 5;

    /* Instead of using this create a Macro
    double pi = 3.14;
    pi = pi+1 ---> we can do this*/

    /*so now as macro is created so instead of writing 3.14 evertime in a program just write PI 
    double area = 3.14*r*r;*/
    double area = PI * r * r;

    // we can't do like that
    //PI = PI+1; as we can't change a macro
    cout<< "Area is :"<<area<< endl; 
    return 0;
}