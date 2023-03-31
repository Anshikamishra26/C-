#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
public:
    void setData(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void){
        // cout<<id --> throws an error bcoz id is not in a static ft
        cout<<"The value of count is "<<count<<endl;
    }   
};
// count is a static data member of class employee
int Employee :: count; //default value 0

int main(){
    Employee harry, rohan, lovish;
    // harry.id = 1
    // harry.count = 1 //can't  do this because id and count are private
    harry.setData();
    harry.getData();
    Employee::getcount();//this is static ft as it runs only static variable

    rohan.setData();
    rohan.getData();
    Employee::getcount();

    lovish.setData();
    lovish.getData();
    Employee::getcount();

    return 0;
}