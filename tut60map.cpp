#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 77;

    marksMap.insert({{"Kim", 69}, {"Kylie", 187}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!= marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";//first is used for a key (eg. Harry) and second is used for a value(eg. 98)
    }
    return 0;
}