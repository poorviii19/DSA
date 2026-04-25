#include<iostream>
using namespace std;

int main(){
    // Key Point
    // Subarray must be continuous
    // You are NOT allowed to pick random elements

//     Brute Force (Just for understanding)

// Check all subarrays → O(n²)

// Optimal Solution → Kadane’s Algorithm ->O(n)
// core idea = current = max(arr[i],current+arr[i])

int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

int n = sizeof(arr)/sizeof(arr[0]);

int current = arr[0];  //best answer seen overall
int maxSum = arr[0];  //best sum ending at current index

for(int i =1;i<n;i++){
    // Either extend previous subarray OR start new one here
    current = max(arr[i], current+arr[i]);

        // Update overall best
    maxSum = max(maxSum, current);
}

cout<<"Maximum subarray sum: "<<maxSum;

    return 0;
}