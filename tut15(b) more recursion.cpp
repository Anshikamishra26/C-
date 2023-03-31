#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size == 0 || size == 1){
        return 1;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        //recursive call
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }

}


int main(){

    int arr[5] = {2,4,6,8,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout<< "Array is sorted";
    }
    else{
        cout<< "Array is not sorted";
    }
    return 0;
}


#include<iostream>
using namespace std;

int getSum(int arr[], int size){
    if(size == 0 ){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }
    int remainingPart = getSum(arr+1, size-1);
        return arr[0] + remainingPart;
    }




int main(){

    int arr[5] = {2,4,6,8,9};
    int size = 5;

    int ans = getSum(arr, size);
    cout<< "Sum is "<< ans << endl;

    return 0;
}



#include<iostream>
using namespace std;
bool Search(int arr[], int size, int key){
    if(size == 0 ){
        return false;
    }

    if(arr[0] == key){
        return true;
    }

    else{
        bool remainingPart = Search(arr+1, size-1, key);
        return remainingPart;
    }

}

int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 3;

    bool ans = Search(arr, size, key);
    if(ans){
        cout<< "Element found "<< endl;
    }
    else{
        cout<< "Not found"<<endl;
    }

    return 0;
}




//Bubble sort
#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    if(n == 0 || n == 1){
        return ;
    }

    //1st case solved--->takes largest element to the end
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, n-1);
    
}
int main(){
    int arr[5] = {2,5,1,6,9};

    sortArray(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<< arr[i] << " "<< endl;
    }
    
    return 0;
}