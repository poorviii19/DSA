#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[1000];
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

    void printMax(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    

    void insertMinheap(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;

            //Min Heap
            if(arr[parent] >arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void printMin(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main(){

    heap h1;
    h1.insertMaxheap(50);
    h1.insertMaxheap(55);
    h1.insertMaxheap(65);
    h1.insertMaxheap(52);
    h1.insertMaxheap(73);
    h1.insertMaxheap(84);
    h1.printMax();
    
    heap h2;
    h2.insertMinheap(50);
    h2.insertMinheap(55);
    h2.insertMinheap(65);
    h2.insertMinheap(52);
    h2.insertMinheap(73);
    h2.insertMinheap(84);
    h2.printMin();

    return 0;
}
