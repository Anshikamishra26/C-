//DRY Principal--> DO NOT REPEAT YOURSELF
/*TEMPLATE --> collection of classes with different datatypes(int, float, etc..) .like we made a class and we want to use it for diiferent
datatypes so we can use it and can make no of classes in the same template
We use template for generic programming-->which means the created class is not specific for a particular datatype it can be used for
every datatype and also we use it to not to volite DRY principal*/

/*#include<iostream>
using namespace std;

class Vector{
    public:
    int *arr;
    int size;
    Vector(int m){
        size = m;
        arr = new int[size];
    }
    int dotProduct(Vector &v){
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    //here we got the ans in int only but if we want it in float so either we've to write the program again for float or if we change the
    //values from int to float(4->4.1) in that case it will give the incorrect ans so we use template here
    Vector v1(3);//vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 1;
    v1.arr[2] = 3;

    Vector v2(3);//vector 2
    v2.arr[0] = 1;
    v2.arr[1] = 1;
    v2.arr[2] = 0;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
*/



#include<iostream>
using namespace std;

template <class T>
class Vector{
    public:
    T *arr;
    int size;
    Vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    Vector <float>v1(3);//vector 1--->here if we want ans in int/double/etc.. so we can simply change <float> to <> any datatype
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    Vector <float>v2(3);//vector 2
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}

