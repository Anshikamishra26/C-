#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if (i==2){
            break;
        }
        cout<<i<<endl;  //output---> 0,1
    }

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<i<<endl;
        if (i==2){
            break;  //output ---> 0,1,2
        }
    }

    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    
    
    return 0;
}