#include<bits/stdc++.h>
using namespace std;


class heap{

    public:
    int arr[100];
    int size = 0;

     void insertMaxheap(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;

            //Max Heap
            if(arr[parent] <arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Can't delete! heap is empty.";
            return;
        }

        // step: 1 put last element to first index
        arr[1] = arr[size];
        //step2: remove last element
        size--;


        //step3:  Maintining heap property:
        int i = 1;
        while(i<=size){
            int left = 2*i;
            int right = 2*i+1;
            int largest = i;

            if(left<size && arr[i]<arr[left]){
                swap(arr[i], arr[left]);
                largest = left;
            }
            else if(right<size && arr[i]<arr[right]){
                 if(largest != i){
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else{
                break;
            }
        }
        cout<<"heap root node deleted successfully";

    }
}
};

int main(){
    heap h;
    h.insertMaxheap(50);
    h.insertMaxheap(55);
    h.insertMaxheap(65);
    h.insertMaxheap(52);
    h.insertMaxheap(73);
    h.insertMaxheap(84);
    h.print();
    h.deleteFromHeap();
    cout<<endl;
    h.print();


    return 0;
}