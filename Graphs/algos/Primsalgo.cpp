#include<iostream>
#include<queue>
#include<vector>
#include<utility>

using namespace std;

int main(){
    int v = 4;
    vector<pair<int,int>> graph[v];

    // u->{v,w}

    graph[0].push_back({1,2});
    graph[1].push_back({0,2});

    graph[0].push_back({2,6});
    graph[2].push_back({0,6});

    graph[0].push_back({3,3});
    graph[3].push_back({0,3});

    graph[1].push_back({3,5});
    graph[3].push_back({1,5});

    graph[2].push_back({3,1});
    graph[3].push_back({2,1});

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 

    vector<int> visited(v,0);

    // {weight,node}

    pq.push({0,0});
    int mstCount = 0;

    while(!pq.empty()){
        
        int wt = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        // already included in MST
        if(visited[node]){
            continue;
        }

        visited[node] = 1;
        mstCount += wt;

        for(auto edge : graph[node]){
            int adjNode = edge.first;
            int edgewt = edge.second;

            if(!visited[adjNode]){
                pq.push({edgewt, adjNode});
            }
        }
    }
    cout << "MST Cost = " << mstCount;
    return 0;
}