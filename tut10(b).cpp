#include<iostream>
using namespace std;
int main(){
    /*****************************BAD PRACTICE*****************************************
  Because here we are giving memory to the array during runtime........even we've to give the size of array during compile time......
  below code maybe  is gonna run but at the end it's a bad practice

  array memory is decided by stack memory in which we've to tell the complier about the size before runtime----when we use the memory
  of stack it is called STATIC MEMORY ALLOCATION
  int n;
  cin>> n;
  int arr[n];
  
  
  
  if we want to make an array of variable size than use HEAP MEMORY--->it's a very big size memory from which we can easily create
  an array of variable size----and when we use the memory of heap that is called DYNAMIC MEMORY ALLOCATION
  
  HERE WE WRITE A VARIABLE AS:
  new char,new int...etc
  and  we can write it as
  
  //new char;
  char* ch  = new char;  --> here a pointer is created which is pointing to the heap memory
  here pointer is created in stack memory whereas new is created in heap memory.....here pointer takes "8 bytes" space 
  and new char will take "1 byte"
  
  ******this way we can create a variable array*********
  // int size is 4 and 5 ints are present so tottal emmory is 5*4=20 bytes and pointer will take memory of 8 bytes
  int n;
  cin>> n;
  int* arr = new int[n]*/





  /*This will realease the stack memory as it moves out of the loop and than again enter into the loop..... stack memory itself 
automatically clean it's memory 

while(true){
  int n = 5;
}

but in case of heap it'll always gonna create a new int and takes more space as when the space of the device gets full
ITS GONNA CRASH A DEVICE......so in HEAP MEMORY we've to clean the memory manually
while(true){
  int *ptr = new int;

  We can release the memory by using 'DELETE' keyword
  delete []arr;--->for array deletion
  delete i;--->for a single digit
}*/


int n;
cin >> n;

// it is the way of represesnting a 2D array here we use int*[n] bcoz in an array multiple rows are represented in the form of int*

//new int*[n]---> representing an array of size n in which the value is int*
int**arr = new int*[n];

for (int i = 0; i < n; i++)
{
    arr[i] = new int[n];
}


//taking input
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >> arr[i][j];
    }
    
}

//taking output
cout<<endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout<<endl;
}


//if no. of rows and cols are diff
int row;
cin>>row;

int col;
cin>>col;

int**arr = new int*[row];

for (int i = 0; i < row; i++)
{
    arr[i] = new int[col];
}


//taking input
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin >> arr[i][j];
    }
    
}

//taking output
cout<<endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout<<endl;
}


// Releasing memory in 2D array
for (int i = 0; i < row; i++)
{
    delete [] arr[i];
}

// here we're releasing memory of an array type int*
delete []arr;

    return 0;
}