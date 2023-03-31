/*OOPS --> Classes and Objects
C++ --> initially called --> C with classes
class --> extension of structures (in C)
Structures had Limitations
           - memebers are public while in classes members are private by default
           - no methods
classes --> structures + more
classes --> can have methods and properties
classes --> can have few members as private and few as public
structures in C++ are typedefed whereas in only structures we can write the fuctions using typedef or by not using typedef
you can declare objects along with class declaration like this:
class Employee{
    class defination
    }  harry, rohan, lovish;
harry.salary = 8 makes no sense if the salary is private*/

//Nesting of memeber fuctions

#include<iostream>
#include<string>
using namespace std;

class binary{
private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!= 0 && s.at(i)!= 1){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}
void binary::ones_complement(void){
    chk_bin();//--> either diplaying in the int we can direct use it here and this what called nesting of member funtions
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)=='1';
        }
        else{
            s.at(i)=='0';
        }
    }  
}
void binary::display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i)<<endl;
    }
    
}
int main(){
    binary b;
    b.read();
    //b.chk_bin();--> if we did chk_binary private then we can't use it in the main fuction it'll give an error at that time only class
    // methods can use it
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}