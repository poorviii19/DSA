#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited) {

    queue<int> q;

    q.push(start);

    visited[start] = true;

    while(!q.empty()) {

        int currentNode = q.front();

        q.pop();

        cout << currentNode << " ";

        // Traverse neighbors
        for(int neighbor : graph[currentNode]) {

            if(!visited[neighbor]) {

                visited[neighbor] = true;

                q.push(neighbor);
            }
        }
    }
}

int main() {


    vector<vector<int>> graph = {

        {1},        // 0 connected to 1

        {0, 2},     // 1 connected to 0 and 2

        {1},        // 2 connected to 1

        {4},        // 3 connected to 4

        {3},        // 4 connected to 3

        {}          // 5 isolated
    };

    int vertices = graph.size();

    vector<bool> visited(vertices, false);

    int connectedComponents = 0;

    // Traverse all nodes
    for(int node = 0; node < vertices; node++) {

        // New component found
        if(!visited[node]) {

            connectedComponents++;

            cout << "Component "
                 << connectedComponents
                 << ": ";

            bfs(node, graph, visited);

            cout << endl;
        }
    }

    cout << endl;

    cout << "Total Connected Components = "
         << connectedComponents;

    return 0;
}