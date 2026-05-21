// recursice DFS:

#include<iostream>
#include<vector>

using namespace std;


void dfs(int current, vector<vector<int>> graph, vector<bool> visited){
    visited[current] = true;
    cout<<current<<"->";
    for(int neigh: graph[current]){
        if(!visited[neigh]){
            dfs(neigh, graph, visited);
        }
    }
}

int main(){

    vector<vector<int>> graph = {
        {1,2,3},
        {0,4,5},
        {0},
        {0},
        {1},
        {5}

    };

    int vertices = graph.size();
    vector<bool> visited(vertices, false);
    dfs(0, graph, visited);

    return 0;
}