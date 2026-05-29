#include<bits/stdc++.h>
using namespace std;

int n =0;
int k =0;

void maxHeap(vector<int> &arr, int val){
    n = n+1;
    int index = n;
    arr[index] = val;

    while(index>1){
        int parent = index/2;

        if(arr[parent]<arr[index]){
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
    
}

void printMaxHeap(vector<int> &arr) {
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void minHeap(vector<int> &arr, int val){
    k = k+1;
    int index = k;
    arr[index] = val;

    while(index>1){
        int parent = index/2;

        if(arr[parent]>arr[index]){
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
}

void printMinHeap(vector<int> &arr){
    for(int i =1;i<=k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteFromMax(vector<int> &arr){
    if(n==0){
        cout<<"Heap is empty!"<<endl;
        return;
    }
    arr[1] = arr[n];
    n--;
    int a = 1;
    while(a<=n){
        int left = 2*a;
        int right = 2*a+1;
        int largest = a;

        if(left<=n && arr[left]>arr[largest]){
            largest = left;
        }
        if(right<= n && arr[right]>arr[largest]){
            largest = right;
        }
        if(largest != a){
            swap(arr[a], arr[largest]);
            a = largest;
        }
        else{
            break;
        }

    }
    cout << "Heap root node deleted successfully\n";
}

void deleteFromMin(vector<int> &arr){
    if(k==0){
        cout<<"Heap is empty!"<<endl;
        return;
    }

    arr[1] = arr[k];
    k--;

    int a = 1;
    while(a<=k){
        int left = 2*a;
        int right = 2*a+1;
        int smallest = a;

        if(left<=k && arr[left]<arr[smallest]){
            smallest = left;
        }
        if(right<k && arr[right]<arr[smallest]){
            smallest = right;
        }
        if(smallest!=a){
            swap(arr[smallest], arr[a]);
        }
        else{
            break;
        }
    }
    cout<<"root node deleted successfully !"<<endl;
}


int main(){
    int m ;
    cout<<"enter number of eleemnts: ";
    cin>>m;

    vector<int> maxarr(m+1);
    vector<int> minArr(m+1);
    cout<<" Enter elemets to insert in heap: "<<endl;
    for(int i =0;i<m;i++){
        int val;
        cin>>val;
        maxHeap(maxarr, val);
    }
    cout<<"Your max heap is: "<<endl;
    printMaxHeap(maxarr);
    
    
    cout<<" Enter elemets to insert in heap: "<<endl;
    for(int i =0;i<m;i++){
        int val;
        cin>>val;
        minHeap(minArr, val);
    }
    cout<<"Your min heap is: "<<endl;
    printMinHeap(minArr);
    cout<<endl;
    cout<<"Max heap after deletion: "<<endl;
    deleteFromMax(maxarr);
    printMaxHeap(maxarr);
    cout<<"Min heap after deletion: "<<endl;
    deleteFromMin(minArr);
    printMinHeap(minArr);
    

    return 0;
}