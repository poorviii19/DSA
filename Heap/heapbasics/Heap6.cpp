#include<iostream>
#include<queue>
using namespace std;


// Heap using stl:

int main(){

    cout<<"using priority queue to build a heap: "<<endl;
    priority_queue<int> pq;  //by default maxHeap in cpp
    pq.push(5);
    pq.push(7);
    pq.push(15);
    pq.push(2);
    pq.push(6);
    
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<pq.top();
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<pq.top();
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<pq.top();
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<pq.top();
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<pq.top();
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    
    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }
    
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5);
    minpq.push(7);
    minpq.push(15);
    minpq.push(2);
    minpq.push(6);

    cout<<"Size: "<<minpq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<minpq.top();
    minpq.pop();
    cout<<"Size: "<<minpq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<minpq.top();
    minpq.pop();
    cout<<"Size: "<<minpq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<minpq.top();
    minpq.pop();
    cout<<"Size: "<<minpq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<minpq.top();
    minpq.pop();
    cout<<"Size: "<<minpq.size()<<endl;
    cout<<"element at top: "<<endl;
    cout<<minpq.top();
    minpq.pop();
    cout<<"Size: "<<minpq.size()<<endl;
    
    if(minpq.empty()){
        cout<<"minpq is empty"<<endl;
    }
    else{
        cout<<"minpq is not empty"<<endl;
    }


    return 0;
}