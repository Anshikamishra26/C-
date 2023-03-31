#include<iostream>
#include<fstream>
#include<string>//when we use getline ft to read the whole string we need this header file

using namespace std;
int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is alsi me\n";
    out<<"This is me also\n";//This will print the whole stringd in a file
    out.close();
    
    ifstream in;
    string st, st2;
    in.open("sample60b.txt");
    //in>>st>>st2;-->this will print only two words of the file taken as st, st2
    //cout<<st<<st2;
    
    //this will read the file until end of file(eof)
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}

