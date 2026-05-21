//  Eulerian path and circuit, Eulerian path for an undirected graph, Eulerian circuit 
// for an undirected graph


#include <iostream>
#include <vector>

using namespace std;

void dfs(int node,
         vector<vector<int>>& graph,
         vector<bool>& visited) {

    visited[node] = true;

    for(int neighbor : graph[node]) {

        if(!visited[neighbor]) {

            dfs(neighbor, graph, visited);
        }
    }
}

bool isConnected(vector<vector<int>>& graph,
                 int vertices) {

    vector<bool> visited(vertices, false);

    int start = -1;

    // Find first node with edge
    for(int i = 0; i < vertices; i++) {

        if(graph[i].size() > 0) {

            start = i;

            break;
        }
    }

    // No edges
    if(start == -1) {
        return true;
    }

    dfs(start, graph, visited);

    // Check all edge vertices visited
    for(int i = 0; i < vertices; i++) {

        if(graph[i].size() > 0 &&
           !visited[i]) {

            return false;
        }
    }

    return true;
}

void checkEulerian(vector<vector<int>>& graph,
                   int vertices) {

    if(!isConnected(graph, vertices)) {

        cout << "Graph is NOT Eulerian";

        return;
    }

    int oddDegreeCount = 0;

    // Count odd degree vertices
    for(int i = 0; i < vertices; i++) {

        if(graph[i].size() % 2 != 0) {

            oddDegreeCount++;
        }
    }

    if(oddDegreeCount == 0) {

        cout << "Eulerian Circuit Exists";
    }
    else if(oddDegreeCount == 2) {

        cout << "Eulerian Path Exists";
    }
    else {

        cout << "Neither Eulerian Path nor Circuit Exists";
    }
}

int main() {

    vector<vector<int>> graph = {

        {1,3},

        {0,2},

        {1,3},

        {0,2}
    };

    int vertices = graph.size();

    checkEulerian(graph, vertices);

    return 0;
}