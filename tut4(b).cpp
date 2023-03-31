#include<iostream>
using namespace std;

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

/*BAD PRACTICE--->bcoz a,ans these are the local variables and here we're giving int& in that case may be it'll not accept a memory
//or maybe someone changes its value
int& update3(int n){
    int a = 10;
    int &ans = a;
    return ans;
}


will give the same problem
int* fun(int n){
    int *ptr = &n;
    return ptr;
}
*/
int main(){
    int n = 6;

    //both will give the value "5" bcoz ft update vala int n is the copy of  n present at main so ft vala n take different memory
    //here is concept of PASS BY VALUE is applied ---> in it a new memory will be created and a copy of the main value is given to ft
    cout<<"Before update: "<<n<<endl;
    update(n);
    cout<<"After update: "<<n<<endl;

    //upadte the value as its a referce variable pointing to the n present at main......here PASS BY REFERENCE concept is applied
    //here we just change the name and take the same variable as in main instead of taking a copy of it
    cout<<"Before update: "<<n<<endl;
    update2(n);
    cout<<"After update: "<<n<<endl;
    return 0;
}