#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter the number of elements to insert: "<<endl;
    cin>>n;

    int arr[n+1];
    cout<<"Enter elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    //forward traversal:
    cout<<"Traversed array: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    //reverse traversal:
    cout<<"reversed array: "<<endl;
    for(int i =n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Insertion:
    // at any position

    int pos;
    cin>>pos;
    if(pos < 0 || pos > n){
    cout << "Invalid position" << endl;
    return 0;
    }

    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    for(int i = n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n++;
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    //Deletiion at given position :
    int del_pos;
    cout<<"Enter position to delete: "<<endl;
    cin>>del_pos;
    if(del_pos < 0 || del_pos >= n){
        cout << "Invalid position" << endl;
        return 0;
    }
    for(int i = del_pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}