#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low  = 0;
    int high = size-1;
    
    while(low<=high){
        int mid = low+(high-low)/2;    // avoids overflow vs (low+high)/2

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]<target){
            low = mid+1;  // target is in right half
        }
        else{
            high = mid-1;  // target is in left half
        }
    }

    return -1;
}

int main(){
    int arr[] = {10,20,40,70,80};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 40;
    int result = binarySearch(arr, size, target);
    cout<<"Found at index: "<<result<<endl;
    return 0;
}