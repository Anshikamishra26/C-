/*There r 3 types of structures---> sequence st(where actions r performed step by step), selection st(where conditions are checked 
weather true or false before performing action, loop st(where loop is executed))......This program is an ex of selection st the previous
ones r the ex of sequence st*/

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    //**********Selection control structure: if-else ladder*************
    // if((age<18) && (age>1)){
    //     cout<<"You cannot come to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are just 18 wait for one more year to pass"<<endl;
    // }
    // else if(age<1){
    //     cout<<"Yor are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party";
    // }


    //************Selection control structure: Switch case***************
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;        
    
    default:
    cout<<"No such cases"<<endl;
        break;
    }
    cout<<"Done with all the cases";
    return 0;
}