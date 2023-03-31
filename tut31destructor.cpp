#include<iostream>
using namespace std;

//Destructor never takes an argument nor does it return any value
//it's name is same as the class name
//have no input parameter
int count = 0;

class num{
    public:
      num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
      }
      ~num(){
        cout<<"This is the time when destructor is called for object number"<<count<<endl;
        count--;
      }
};
int main(){
    cout<<"We r inside our main function"<<endl;
    cout<<"Creating first object n1 "<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;//Destructor is used to break the object when not in use....constructor is use to make the object....it's
    //like if we use to allocate a memory and want that memory back after use in that case we can use destructor.
    return 0;
}