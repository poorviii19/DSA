#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int minCost(vector<int> &ropes){
    priority_queue<int, vector<int>, greater<int>> pq;

    int minCost = 0;
    for(int i = 0;i<ropes.size();i++){
        pq.push(ropes[i]);
    }

    while(pq.size()>1){
        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        int sum = first+second;

        minCost+=sum;
        pq.push(sum);
    }

    return minCost;
}

int main(){
    vector<int> ropes = {4,3,6,2};
    cout<<minCost(ropes);

    return 0;
}