#include<iostream>
#include<vector>

using namespace std;


bool isSafe(int node, vector<int> adjList[], vector<int> color, int col){
    for(auto neighbour : adjList[node]){
        if(color[neighbour] == col){
            return false;
        }
    }
    return true;
}


bool solve(int node, int v, int c, vector<int> adjList[], vector<int> &color){

    if(node == v){
        return true;
    }

    for(int col = 1; col<=c; col++){
        if(isSafe(node, adjList, color, col)){
            
            color[node] = col;
            if(solve(node+1, v, c, adjList, color)){
                return true;
            }
            color[node] =0;
        }
    }

    return false;
}

bool graphColoring(int v, vector<vector<int>> &edges, int c){
    vector<int> adjList[v];

    for(auto edge : edges){
        int u = edge[0];
        int x = edge[1];

        adjList[u].push_back(x);
        adjList[x].push_back(u);
    }

    vector<int> color(v,0);

    return solve(0, v, c, adjList, color);
    
}

int main(){
    int V = 4;

    vector<vector<int>> edges={
        {0,1},
        {0,2},
        {1,2},
        {2,3}
    };

    int c = 3;
    bool result = graphColoring(V, edges, c);

    if(result){
        cout<<"graph can be colored";
    }
    else{
        cout<<"graph can't be colored";
    }


    return 0;
}