#include<bits/stdc++.h>
using namespace std;


    void heapifyMax(vector<int> &arr, int n, int i){

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }

    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapifyMax(arr, n, largest);
    }
}

    void heapSort(vector<int> &arr, int n){
        int size = n;
        while(size > 1){
            // Step 1: swap root with last element
            swap(arr[1], arr[size]);

            // Step 2: reduce heap size
            size--;

            // Step 3: heapify root
            heapifyMax(arr, size, 1);
        }

    }

int main(){
    int n = 5;
    vector<int> arr(n+1);
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = n/2; i >= 1; i--){
        heapifyMax(arr, n, i);
    }
    
    cout<<"printing the array after heapify"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
    heapSort(arr,n);
    cout<<"printing the array after heap sort"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}