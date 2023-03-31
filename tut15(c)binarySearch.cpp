#include<iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int key){

    //element not found
    if(s > e){
        return -1;
    }

    int mid = s+(e- s)/2;

    if(arr[mid] == key){
        return true;
    }
    

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }

    else{
        return binarySearch(arr, s, mid-1, key);
    }

}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 18;

    cout << "Present or not "<< binarySearch(arr, 0, 5, 18);

    return 0;
}


//Reverse string
#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){

    cout<< "Call receive for "<< str << endl;
    if(i > j){
        return ;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}
int main(){

    string name = "babbar";
    cout<<endl;
    reverse(name, 0, name.length()-1);

    cout<<endl;
    cout << name <<endl;
    return 0;
}




//Check Palindrome
#include<iostream>
using namespace std;


bool checkPalindrome(string str, int i, int j){
    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}
int main(){
    string name = "abbccbba";
    cout<< endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<< "it is a palindrome"<<endl;
    }
    else{
        cout<< "it is not a palindrome"<<endl;
    }
    return 0;
}




#include<iostream>
using namespace std;

int power(int a, int b){
    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    //if even than ans = a^b/2 * a*b/2
    if(b%2 == 0){
        return ans * ans;
    }

    //if odd than ans = a* a^b/2 * a^b/2
    else{
        return a*ans*ans;
    }
}
int main(){

    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "Ans is " << ans<<endl;
    return 0;
}