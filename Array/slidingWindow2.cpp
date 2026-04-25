#include<iostream>
using namespace std;


int main(){
// Variable Window Example
// Problem:

// Longest subarray with sum ≤ K

int arr[] = {1,2,1,0,1,1,0};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 2;

int left = 0 , sum = 0, maxLen = 0;
for(int right = 0;right<n;right++){
    sum+=arr[right];

    while(sum>k){
        sum -= arr[left];
        left++;
    }

    maxLen = max(maxLen, right-left+1);
}

cout<<"Max length: "<<maxLen<<endl;

    return 0;
}