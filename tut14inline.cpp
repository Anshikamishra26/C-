/*Inline functions, Default Arguments and Constant Arguments*/
#include<iostream>
using namespace std;

// INLINE FT are basicaly used to reduce the ft calls overhead....it also save memory as it not uses extra memory
/*inline is basically a request to the compiler that we do to make our ft inline*/
inline int product(int a, int b){ //in functions when we run our program the value of actual parameters first get copied to formal 
    int c = a*b;//parameters then the action is performed but when we use inline ft the code directly get copied to ft call and 
    return c;//the action is performed
}
/*Do not use inline ft for bigger codes bcoz then it takes more memory space use it for smaller codes. Also Do not use 
inline when there is recursion and static variables*/

int product(int a, int b){
    static int c = 0; //This will execute once
    c = c+1;//Next time this ft will run, the value of c will be retained
    return a*b+c;
}

/*Default Arguments*/
float moneyReceived(int currentMoney, float factor = 1.04){//Default Arguments must be written in the extreme right of the ft and 
//if we want to make more values as default so go from right to left
    return currentMoney * factor;//otherwise it will give an error
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;//code of the function directly get copied here 
/*if we call a ft multiple times so instead of copying values of AP to FP then performimg we can directly copy the code in ft call
by using inline ft(only for smaller codes)it doesn't have any effect in the output we're just minimizing steps*/ 
    int money = 100000;
    cout<<"if you have "<<money<<" Rs in yout bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;//This will
    //take 1.04 as a default value here as no other value is given and that is called default arguments
    cout<<"For VIP's if you have "<<money<<" Rs in yout bank account, you will receive "<<moneyReceived(money + 1.1)<<" Rs after 1 year";
    return 0;
}