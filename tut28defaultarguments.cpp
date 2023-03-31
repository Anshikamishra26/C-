#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;
    
    public:
    Simple(int a, int b = 9, int c = 3)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
    
};
void Simple ::printData()
{
    cout << "The given values of a, b  and c are " << data1 << ", " << data2 << ", " << data3 << endl;
}

int main()
{
    Simple s(1, 2, 6);//if there present only value of a then it'll take value of b, c as 9 and 3 as these are their default values
    s.printData();
    return 0;
}