#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(int start, vector<vector<int>> graph){
    int vertices = graph.size();
    vector<bool> visited(vertices,false);

    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<"->";
        for(int neighbour:  graph[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

int main(){

    int vertices = 6;
    vector<vector<int>> graph = {
        {1,2,3},
        {0,4,5},
        {0},
        {0},
        {1},
        {1}
    };

    bfs(0,graph);

    return 0;
}