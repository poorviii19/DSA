#include<iostream>
#include<vector>

using namespace std;


// path detection in directed graph using dfs
bool dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &pathvisited){
    visited[node] = 1;
    pathvisited[node] = 1;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            if(dfs(neighbour, adj, visited, pathvisited)){
                return true;
            }
            
        }
        else if(pathvisited[neighbour]){
            return true;
        }
    }

    pathvisited[node] = 0;
    return false;
}


bool isCycle(int V, vector<int> adj[]){
    vector<int> visited(V,0);
    vector<int> pathvisited(V,0);

    for(int i =0;i<V;i++){
        if(!visited[i]){
            if(dfs(i, adj, visited, pathvisited)){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int V = 5;
    vector<int> adj[V];

    adj[0] = {1};
    adj[1] = {2};
    adj[2] = {3};
    adj[3] = {4};
    adj[4] = {4};

    if(isCycle(V, adj)){
        cout<<"Cycle detected";
    }
    else {
        cout<<"Cycle not detected";
    }


    return 0;
}