#include<iostream>
using namespace std;

int factorial(int n){//Here function is called itself as if we give n = 5 first it checks the condition weather n<=1 or not
    if(n<=1){        //if yes return 1
        return 1;//--->this is the base condition it is imp bcoz if we didn't apply it our ft will not get to know where to stop
    }//and so our stack gonna overflow in that case.....as ft are written in a stack
    return n * factorial(n-1);//if no it take 5*4...then again goes up checks weather 4<=1 or not then gives 4*3 then repeats the same
}//process until it becomes <=1 and once it become <=1 it gives 1 as further output


int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a);
    return 0;
}


#include <iostream>
using namespace std;

void getHome(int src, int dest){
    cout<< "source "<< src << " destination " << dest << endl;
    //base case
    if(src==dest){
        cout<< "Phauch gya" <<endl;
        return ;
    }

    //processing-->increase one step
    src++;

    // recursive call
    getHome(src, dest);
    
}
int main(){
    int dest = 10;
    int src = 1;

    cout<< endl;
    getHome(src, dest);
    return 0;
}



#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }

    int ans = countDistinctWays(nStairs -1) + 
            countDistinctWays(nStairs - 2);

    return ans;
}




#include<iostream>
using namespace std;

void sayNum(int n, string arr[]){
    //base case
    if(n == 0){
        return ;
    }
    //processing
    int digit = n%10;
    n = n/10;

    //recursive call
    sayNum(n, arr);
    cout<< arr[digit]<< " ";
}
int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout<< endl<< endl;
    sayNum(n, arr);
    cout<< endl<< endl;
    return 0;
}