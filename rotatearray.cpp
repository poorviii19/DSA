#include<iostream>
using namespace std;

void rotationByOne(int arr[], int size){
    int temp = arr[0];
    for(int i =1;i<size;i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotationasperindextimes(int arr[], int n){
    for(int k =0;k<3;k++){
        int temp = arr[0];
        for(int i =1;i<n;i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        cout<<"After "<<k<<"th rotation: "<<" ";
        for(int j =0;j<n;j++){
            cout<<arr[j]<<" ";
        }
    }
}



int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"enter elements: "<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    rotationByOne(arr, n);
    rotationasperindextimes(arr, n);

    return 0;

}