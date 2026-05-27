#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> dijkstra(int V, vector<pair<int,int>> adj[], int source){

    // min heap -> {distance, node}
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    vector<int> dist(V + 1, 1e9);

    dist[source] = 0;

    pq.push({0, source});

    while(!pq.empty()){

        int node = pq.top().second;
        int distance = pq.top().first;

        pq.pop();

        // traverse neighbours
        for(auto it : adj[node]){

            int adjNode = it.first;
            int weight = it.second;

            // relaxation
            if(distance + weight < dist[adjNode]){

                dist[adjNode] = distance + weight;

                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    return dist;
}

int main(){

    int V = 5;

    vector<pair<int,int>> adj[V + 1];

    // u -> v , weight

    adj[1].push_back({2,2});
    adj[1].push_back({3,4});
    adj[1].push_back({4,1});

    adj[2].push_back({5,7});

    adj[3].push_back({4,3});

    adj[4].push_back({5,2});

    // for undirected graph
    adj[2].push_back({1,2});
    adj[3].push_back({1,4});
    adj[4].push_back({1,1});
    adj[5].push_back({2,7});
    adj[4].push_back({3,3});
    adj[5].push_back({4,2});

    vector<int> dist = dijkstra(V, adj, 1);

    for(int i = 1; i <= V; i++){

        cout << "Shortest distance from 1 to "
             << i << " = "
             << dist[i] << endl;
    }
}