#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // string st = "Harry bhai";
    // //Opening the file using constructor and writing it
    // ofstream out("sample60.txt");//Writing operation
    // out<<st;-->Write the given string in a sample file
    //out is like to give the output in the file by writing it

    string st2;
    //Opening the file using constructor and reading it
    ifstream in("sample60b.txt");//Reading operation
    in>>st2;//-->this will not read the whole string it only read a word because this will not read spaces and enters if we want to read
    //the whole line in of the file we've to use the getline ft
    //in is like to give the input in the compiler by printing the whole line or matter present in the file
    getline(in, st2);//--> This will read only one line but if want to read multiple line to use getline ft that much time
    cout<<st2;
    return 0;
}

/*
The useful classes for working with files in C++ are:
1. fstreambase -->it is the base class
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*In order to work with files on C++ , you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/