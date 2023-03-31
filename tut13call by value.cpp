#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

void swap(int a, int b){//x and y are actual parameters so during execution the value of x and y goes to formal parameters i.e. a and b 
    int temp = a; //but this will not swap 
    a = b;
    b = temp;
}
//***********CALL BY REFERENCE USING POINTERS************
void swapPointers(int* a, int* b){ 
    int temp = *a; 
    *a = *b;
    *b = temp;
}
/*or*/
// //***********CALL BY REFERENCE USING C++ REFERENCE VARIABLES************(See tut4)
void swapRefernceVar(int &a, int &b){ //When the values of x and y comes to a and b "&a" point towards x and "&b" towards y and perform
    int temp = a; //these steps
    a = b;
    b = temp;
}
int main(){
    int x = 4, y = 5;
    cout<<"The sum of x and y is "<<sum(x, y)<<endl;
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    swap(x, y);//This will not swap as the value of x and y only get copied to formal parameters but any change in formal parameters
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;//will not ressult in changing actual parameters
    //we can swap it by using the concept of pointers i.e. by giving it address of x and y that we want to swap
    swapPointers(&x, &y);//This will swap x and y using pointers
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    /*or*/
    swapRefernceVar(x, y);//This will swap x and y using reference variable---->no need of "&x and &y" bcoz &a and &b already pointing
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;//towards x and y
    return 0;
}
    

//*************RETURN BY REFERENCE******************
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

void swap(int a, int b){//x and y are actual parameters so during execution the value of x and y goes to formal parameters i.e. a and b 
    int temp = a; //but this will not swap 
    a = b;
    b = temp;
}
int & swapRefernce(int &a, int &b){ 
    int temp = a; 
    a = b;
    b = temp;
    return a;
}
    int main(){
    int x = 4, y = 5;
    swapRefernce(x, y)= 788; //This will return the value of x as 788
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    
    return 0;


}