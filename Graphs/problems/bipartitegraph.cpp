#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool bfs(int start, vector<int> adj[], vector<int> color){
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto neighbour : adj[node]){
            if(color[neighbour] == -1){
                color[neighbour] = 1-color[node];
                q.push(neighbour);
            }
            else if(color[neighbour] == color[node]){
                return false;
            }
        }
    }
    return true;
}


bool isBipartite(int v, vector<int> adj[]){
    vector<int> color(v,-1);

    for(int i =0;i<v;i++){
        if(color[i] == -1){
            if(!bfs(i, adj, color)){
                return false;
            }
        }
    }

    return true;
}
int main()
{

    int v = 4;
    vector<int> adj[v];

    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(0);
    adj[0].push_back(3);

    if(isBipartite(v,adj)){
        cout<<"graph is bipartite";
    }
    else{
        cout<<"graph is  not bipartite";
        
    }


    return 0;
}