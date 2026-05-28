#include<iostream>
#include<vector>
#include<queue>

using namespace std;



// Cycle detection in undirectedgraph using bfs
bool bfs(int start, vector<int> adj[], vector<int> &visited){
    queue<pair<int,int>> q;
    q.push({start,-1});
    visited[start] = 1;

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;

        q.pop();

        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = 1;
                q.push({neighbour,node});
            }
            else if(neighbour != parent){
                return true;
            }
        }
    }
    return false;
}



bool isCycle(int V, vector<int> adj[]){
    vector<int> visited(V, 0);

    for(int i =0 ; i<V; i++){
        if(!visited[i]){
            if(bfs(i,adj,visited)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int V = 4;

    vector<int> adj[V];

    // example-1
        // adj[0] = {1,3};
        // adj[1] = {0,2};
        // adj[2] = {1};
        // adj[3] = {0};

    // example-2
        adj[0] = {1,3};
        adj[1] = {0,2};
        adj[2] = {1,3};
        adj[3] = {0,2};

    if(isCycle(V, adj)){
        cout<<"Cycle detected";
    }
    else{
        cout<<"Cycle is not detected";
    }



    return 0;
}