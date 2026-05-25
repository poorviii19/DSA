#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, wt;
};

int main() {

    int V = 4;

    vector<Edge> edges = {
        {0,1,4},
        {0,2,5},
        {1,2,-2},
        {2,3,3}
    };

    vector<int> dist(V, 1e9);

    int src = 0;
    dist[src] = 0;

    // Relax all edges V-1 times
    for(int i = 0; i < V-1; i++) {

        for(auto edge : edges) {

            int u = edge.u;
            int v = edge.v;
            int wt = edge.wt;

            if(dist[u] != 1e9 &&
               dist[u] + wt < dist[v]) {

                dist[v] = dist[u] + wt;
            }
        }
    }

    // Negative cycle detection
    bool negativeCycle = false;

    for(auto edge : edges) {

        int u = edge.u;
        int v = edge.v;
        int wt = edge.wt;

        if(dist[u] != 1e9 &&
           dist[u] + wt < dist[v]) {

            negativeCycle = true;
        }
    }

    if(negativeCycle) {
        cout << "Negative Cycle Detected\n";
    }
    else {

        for(int i = 0; i < V; i++) {
            cout << "Distance from source to "
                 << i << " = "
                 << dist[i] << endl;
        }
    }
}


// Beelman Ford works with negative edges as well and detects negative cycle