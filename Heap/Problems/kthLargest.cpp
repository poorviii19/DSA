// Question: Find the kth largest element in an array:

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthLargest(vector<int> &arr, int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    for(int i =0;i<arr.size();i++){
        pq.push(arr[i]);

        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){

    vector<int> arr = {7,10,4,3,20,15};

    int k = 3;

    cout << kthLargest(arr,k);


    return 0;
}