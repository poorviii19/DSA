#include <iostream>
#include <vector>
#include <stack>

using namespace std;

    // STEP 1 DFS
    void dfs1(int node,
              vector<int> adj[],
              vector<int>& visited,
              stack<int>& st) {

        visited[node] = 1;

        for(auto neighbour : adj[node]) {
            if(!visited[neighbour]) {
                dfs1(neighbour, adj, visited, st);
            }
        }

        st.push(node);
    }

    // STEP 3 DFS on reversed graph
    void dfs2(int node,
              vector<int> transpose[],
              vector<int>& visited) {

        visited[node] = 1;

        cout << node << " ";

        for(auto neighbour : transpose[node]) {
            if(!visited[neighbour]) {
                dfs2(neighbour, transpose, visited);
            }
        }
    }

    void kosaraju(int V, vector<int> adj[]) {

        stack<int> st;

        vector<int> visited(V, 0);

        // STEP 1
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                dfs1(i, adj, visited, st);
            }
        }

        // STEP 2
        vector<int> transpose[V];

        for(int i = 0; i < V; i++) {

            visited[i] = 0;

            for(auto neighbour : adj[i]) {
                transpose[neighbour].push_back(i);
            }
        }

        // STEP 3
        while(!st.empty()) {

            int node = st.top();
            st.pop();

            if(!visited[node]) {

                dfs2(node, transpose, visited);

                cout << endl;
            }
        }
    }

int main() {

    int V = 5;

    vector<int> adj[V];

    adj[0].push_back(1);

    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(0);

    adj[3].push_back(4);

    adj[4].push_back(3);

  kosaraju(V, adj);

    return 0;
}