#include<bits/stdc++.h>
using namespace std;

class heap{
    public:

    void heapify(int arr[], int n, int i){

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
        heapify(arr, n, largest);
    }
}

    void heapSort(int arr[], int n){
        int size = n;
        while(size > 1){
            // Step 1: swap root with last element
            swap(arr[1], arr[size]);

            // Step 2: reduce heap size
            size--;

            // Step 3: heapify root
            heapify(arr, size, 1);
        }

    }


};

int main(){
    heap h;

    int arr[8] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i = n/2; i >= 1; i--){
        h.heapify(arr, n, i);
    }
    
    cout<<"printing the array after heapify"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
    h.heapSort(arr,n);
    cout<<"printing the array after heap sort"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}