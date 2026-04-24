#include<iostream>
using namespace std;

int main(){

    // Array declaration:
    // Method-1:
    int arr1[5]; //declaration with size(garbage values inside)

    //Method-2:
    int arr2[5] = {10, 20, 30, 40, 50}; //declare and initialize


    //Method-3:
    int arr3[] = {1,2,3,4,5,6}; //compiler will count the size;

    //Method-4:
    int arr4[5] = {1,2}; // Partial initializaqtion: rest values will become 0;



    //Accessing elements:
    cout<<arr2[0]<<endl; //prints first element because array follows 0 based indexing
    cout<<arr2[4]<<endl; //last element of arr2

     // Size of array (only works for stack-allocated arrays)
    int n = sizeof(arr2) / sizeof(arr2[0]);    //total bytes /  bytes per element 
    int k = sizeof(arr2);  //total bytes (5 × 4 = 20 bytes)
    cout << "Size: " << n << endl;   // 5
    cout<<"total bytes: "<<k<<endl;



    // Static vs Dynamic Arrays:
    //Static Array(fixed size, lives on the stack):

    int array1[100]; // size fixed at compile time
                    // fast, but can't resize
    
    //Dynamic Array(heap-allocated, flexible size):
    int n = 10;
    int* arr= new int[n]; //allocate on heap at runtime

    //assigning values to array:
    arr[0] = 5;         //use just like a normal array
    arr[1] = 10;

    delete[] arr;       //MUST free memory manually!
    arr = nullptr;      //good practice after deleteion



    return 0;
}