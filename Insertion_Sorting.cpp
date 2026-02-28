#include<iostream>
using namespace std;

void insertatbeg(int arr[], int size,int ele){
    for(int i =size-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    
    arr[0] = ele;
}


void insertatEnd(int arr[],int size, int ele){
  
    arr[size-1] =  ele;
}
void insertatpos(int arr[], int size, int ele, int pos){
    for(int i =size-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = ele;
}

void bubblesort(int arr[], int size){
    int temp = arr[0];
    for(int i =0;i<size;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void selectionsort(int arr[], int size){
    for(int i =0;i<size;i++){
        int minidx = i;

        for(int j =i+1;j<size;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }

        if(minidx != i){
            int temp =arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
        }
    }
}

void insertionsort(int arr[], int size){
    for(int i =1;i<size;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}



int main(){
    int size;
    cin>> size;
    int arr[size];

    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    // int ele;
    // cin>>ele;
    // size++;
    // insertatbeg(arr,size,ele);

    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    

    // insertions
    
    // insertatEnd(arr, size,ele);
    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // int pos;
    // cin>> pos;
    // insertatpos(arr, size, ele, pos);
    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    

    // sorting
    
    // bubblesort(arr, size);
    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    
    // selectionsort(arr, size);
    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    
    insertionsort(arr, size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}







































