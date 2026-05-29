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

    void deleteFromMaxHeap() {
    if (size == 0) {
        cout << "Can't delete! Heap is empty.\n";
        return;
    }

    // Step 1: Replace root with last element
    arr[1] = arr[size];

    // Step 2: Remove last element
    size--;

    // Step 3: Heapify Down
    int i = 1;

    while (i <= size) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;

        if (left <= size && arr[left] > arr[largest]) {
            largest = left;
        }

        if (right <= size && arr[right] > arr[largest]) {
            largest = right;
        }

        // If parent is already largest → stop
        if (largest == i) {
            break;
        }

        swap(arr[i], arr[largest]);
        i = largest;
    }

    cout << "Heap root node deleted successfully\n";
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
    h.deleteFromMaxHeap();
    cout<<endl;
    h.print();


    return 0;
}