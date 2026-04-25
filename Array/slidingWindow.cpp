#include<iostream>
using namespace std;


int main(){

// Fixed Window Example
// Problem:

// Find max sum of subarray of size k

    int arr[] = {2,1,5,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    int windowSum = 0;


    // first window
    for(int i =0;i<k;i++){
        windowSum+=arr[i];
    }

    int maxSum = windowSum;
    // slide window
    for(int i = k;i<n;i++){
        windowSum += arr[i];  //add next
        windowSum -= arr[i-k]; //remove old
        maxSum = max(maxSum,windowSum);
    }


    cout<<"Max sum is: "<<maxSum<<endl;

    return 0;
}

