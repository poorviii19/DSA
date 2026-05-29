#include<bits/stdc++.h>
using namespace std;

void heapifyMax(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapifyMax(arr, n, largest);
    }
    else{
        return;
    }

}
void heapifyMin(vector<int> &arr, int n, int i){
    int smallest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<n && arr[left]<arr[smallest]){
     smallest = left;
    }
    if(right<n && arr[right]<arr[smallest]){
         smallest= right;
    }
    if (smallest != i){
        swap(arr [smallest], arr[i]);
        heapifyMin(arr, n, smallest);
    }
    else{
        return;
    }

}






int main(){
    int n,m;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n>>m;
    vector<int> arr(n+1);
    vector<int> arr1(m+1);
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = n/2;i>0; i--){
        heapifyMax(arr,n, i);
    }
     cout<<"printing the array after heapify"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i =1;i<=m;i++){
        cin>>arr1[i];
    }
    for(int i = m/2;i>0; i--){
        heapifyMin(arr1,m, i);
    }
     cout<<"printing the array after heapify"<<endl;
    for(int i =1;i<=m;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    return 0;
}