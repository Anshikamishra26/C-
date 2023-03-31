#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
    int x1;
    int y1;
    public:
    void process()
        {
            cout<<"The addition is "<<x1+y1<<endl;
            cout<<"The subtraction is "<<x1-y1<<endl;
            cout<<"The multiplication is "<<x1*y1<<endl;
            cout<<"The division is "<<x1/y1<<endl;
        }
        void set(int a,int b)
        {
            x1=a;
            y1=b;
        }
};
class ScientificCalculator{
    protected:
    int x2;
    int y2;
    public:
    void process(){
        cout<<"The square root of x1 is "<<sqrt(x2)<<endl;
        cout<<"The square root of y2 is "<<sqrt(y2)<<endl;
        cout<<"The cube root of x2 is "<<cbrt(x2)<<endl;
        cout<<"The cube root of y2 is "<<cbrt(y2)<<endl;
    }
    void set(int a, int b){
        x2 = a;
        y2 = b;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    public:
        void masterset(int a,int b)
        {
            SimpleCalculator::set(a,b);
            ScientificCalculator::set(a,b);
            SimpleCalculator::process();
            ScientificCalculator::process();
        }
};

int main()
{
    int p,q;
    HybridCalculator h;
    cout<<" Enter two values "<<endl;
    cin>>p>>q;

    h.masterset(p,q);
    return 0;
}
