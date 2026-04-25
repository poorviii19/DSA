#include<iostream>
using namespace std;

int main(){

    //Two pointer approach to find targeted sum: use in sorted array
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    int left = 0 ;//first pointer
    int right = n-1; //second pointer

    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==target){
            cout<<"Pair found: "<<arr[left]<<", "<<arr[right]<<endl;
            return 0;
        }
        else if(sum<target){
            left++;  // need bigger sum → move left pointer right
        }
        else{
            right--;   // need smaller sum → move right pointer left
        }
    }

    cout<<"No pair found "<<endl;


    return 0;
}