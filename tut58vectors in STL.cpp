#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){//-->reference operator
    cout<<"Displaying this vec";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";//-->both of these have same function
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;    
}
int main(){
    //Ways to create a vector
    vector<int> vec1;//zero length integer vector
    int element, size = 5;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);//-->it will put in the element
    // }
    // //vec1.pop_back();-->it will pop out the element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();//-->vec1.begin means in the beginning of the list
    // vec1.insert(iter+1,5, 54);//-->iter+1 means in the second position....and 5 means copying 54 five time in the second position
    // display(vec1);

    vector<char> vec2(4); //4-element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); //4-elements character vector from vec2
    // display(vec3);
    vector<int> vec4(6, 3); //6-elements vector of 3s-->means 3 will print 6 times
    return 0;
}