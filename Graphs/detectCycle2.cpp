#include<iostream>
#include<vector>

using namespace std;


// Cycle detection in undirected graph using dfs
bool dfs(int node, int parent, vector<int> adj[], vector<int> &visited){
    visited[node] = true;
    for( auto neighbour :  adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, node, adj, visited);
        }
        else if(neighbour != parent){
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]){
    vector<int> visited(V, 0);

    for(int i =0;i<V;i++){
        if(!visited[i]){
            if(dfs(i,-1,adj,visited)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int V = 4;

    vector<int> adj[4];
// example-1:
    // adj[0] = {1,3};
    // adj[1] = {0,2};
    // adj[2] = {1};
    // adj[3] = {0};

// example-2:
    adj[0] = {1,3};
    adj[1] = {0,2};
    adj[2] = {1,3};
    adj[3] = {0,2};

    if(isCycle(V, adj)){
        cout<<"Cycle is detected";
    }
    else{
        cout<<"Cycle is not detected";
    }

    return 0;
}