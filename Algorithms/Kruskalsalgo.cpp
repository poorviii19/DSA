#include <bits/stdc++.h>
using namespace std;

// Comparator
bool cmp(vector<int>& a, vector<int>& b) {
    return a[2] < b[2];
}

// Make Set
void makeSet(vector<int>& parent, vector<int>& rank, int n) {
    for(int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

// Find Parent (Path Compression)
int findParent(vector<int>& parent, int node) {
    if(parent[node] == node)
        return node;
    return parent[node] = findParent(parent, parent[node]);
}

// Union by Rank
void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = findParent(parent, u);
    v = findParent(parent, v);

    if(rank[u] < rank[v]) {
        parent[u] = v;
    }
    else if(rank[v] < rank[u]) {
        parent[v] = u;
    }
    else {
        parent[v] = u;
        rank[u]++;
    }
}

// Kruskal MST
int minimumSpanningTree(vector<vector<int>>& edges, int n) {
    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(n), rank(n);
    makeSet(parent, rank, n);

    int minWeight = 0;

    for(auto &edge : edges) {
        int u = findParent(parent, edge[0]);
        int v = findParent(parent, edge[1]);
        int wt = edge[2];

        if(u != v) {
            minWeight += wt;
            unionSet(u, v, parent, rank);
        }
    }

    return minWeight;
}

// MAIN FUNCTION
int main() {

    int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<int>> edges;

    cout << "Enter edges (u v weight):\n";
    for(int i = 0; i < e; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({u, v, wt});
    }

    int result = minimumSpanningTree(edges, n);

    cout << "Minimum Spanning Tree Weight: " << result << endl;

    return 0;
}