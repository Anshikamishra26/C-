#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Another methods of reading or writing in a file
    //Connecting our file with hout stream
    ofstream hout("sample60.txt");
    
    //Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name";
    cin>>name;

    //Writing a string to the file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("Sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();
    return 0;
}