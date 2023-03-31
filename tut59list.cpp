/*LIST in STL is used for insertion and deletion of the element from the array bcoz array itself can't do it that much fast as in array
all the elements in array are in contiguos memory form and if we insert/delete any element from it than we've to arrange the elements
again in the contiguous form which will take lot of time and LIST will do it so fast......so if we want to do insertion/deletion use LIST
but if we want fast access than use array*/


#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    //6 8 9
    list<int> list1;//list of 0 length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(15);
    list1.push_back(58);
    display(list1);
    //Removing elements from the list
    //list1.pop_front();
    //list1.pop_back();
    //list1.remove(9);

    //Sorting the list
    list1.sort();
    display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);

    // list<int> :: iterator iter;-->instead of this we can use void display() in the above section
    // iter = list1.begin();
    // cout<<"iter"<<" ";
    // iter++;
    // cout<<"iter"<<" ";
    // iter++;
    // cout<<"iter"<<" ";
    // iter++;
    // cout<<"iter"<<" ";
    // iter++;

    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 5;
    iter++;
    *iter = 8;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);
    return 0;
}