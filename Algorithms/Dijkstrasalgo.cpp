#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int,int> pii;

int main() {

    int V = 5;

    vector<vector<pii>> graph(V);

    // {neighbor, weight}

    graph[0].push_back({1,4});
    graph[0].push_back({2,1});

    graph[2].push_back({1,2});
    graph[2].push_back({3,1});

    graph[1].push_back({4,5});

    graph[3].push_back({4,3});

    vector<int> dist(V, 1e9);

    priority_queue<
        pii,
        vector<pii>,
        greater<pii>
    > pq;

    dist[0] = 0;

    pq.push({0,0});

    while(!pq.empty()) {

        int d = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        for(auto edge : graph[node]) {

            int adjNode = edge.first;
            int wt = edge.second;

            if(d + wt < dist[adjNode]) {

                dist[adjNode] = d + wt;

                pq.push({
                    dist[adjNode],
                    adjNode
                });
            }
        }
    }

    for(int i=0;i<V;i++) {
        cout << dist[i] << " ";
    }
}