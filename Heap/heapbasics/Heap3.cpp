#include<bits/stdc++.h>
using namespace std;

class heap{
public:
    int arr[1000];
    int size = 0;

    void insertMinheap(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;

            if(arr[parent] > arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromMinHeap(){
        if(size == 0){
            cout << "Can't delete! heap is empty.\n";
            return;
        }

        // Step 1: Move last element to root
        arr[1] = arr[size];

        // Step 2: Remove last element
        size--;

        // Step 3: Heapify (Min Heap)
        int i = 1;
        while(i <= size){
            int left = 2 * i;
            int right = 2 * i + 1;
            int smallest = i;

            // check left child
            if(left <= size && arr[smallest] > arr[left]){
                smallest = left;
            }

            // check right child
            if(right <= size && arr[smallest] > arr[right]){
                smallest = right;
            }

            // swap if needed
            if(smallest != i){
                swap(arr[i], arr[smallest]);
                i = smallest;
            }
            else{
                break;
            }
        }

        cout << "Heap root node deleted successfully\n";
    }
};

int main(){
    heap h2;

    h2.insertMinheap(50);
    h2.insertMinheap(55);
    h2.insertMinheap(65);
    h2.insertMinheap(52);
    h2.insertMinheap(73);
    h2.insertMinheap(84);

    cout << "Before deletion: ";
    h2.print();

    h2.deleteFromMinHeap();

    cout << "After deletion: ";
    h2.print();

    return 0;
}