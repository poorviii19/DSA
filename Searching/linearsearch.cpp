#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i =0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 60 , 80, 30, 90};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 30;

    int result = linearSearch(arr, size, target);

    if(result == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at index: "<<result<<endl;
    }
    return 0;
}