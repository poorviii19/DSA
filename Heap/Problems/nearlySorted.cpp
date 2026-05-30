#include<iostream>
#include<vector>
#include<queue>

using namespace std;
vector<int> nearlySorted(vector<int> &heap, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for(int i = 0;i<=k;i++){
        pq.push(heap[i]);
    }

    for(int i =k+1;i<heap.size();i++){
        ans.push_back(pq.top());
        pq.pop();
        pq.push(heap[i]);
    }

    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}


int main(){
    vector<int> heap = {6,5,3,2,8,10,9};
    int k = 3;
    vector<int> ans = nearlySorted(heap,k);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}