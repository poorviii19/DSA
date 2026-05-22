// Hamilton path for undirected graphs

#include<iostream>
#include<vector>

using namespace std;


bool hamiltonPath(int current, vector<vector<int>> &graph, vector<bool>& visited, int visitCOunt, int totalCOunt){
    if(visitCOunt == totalCOunt){
        return true;
    }

    for(int neighbour: graph[current]){
        if(!visited[neighbour]){
            visited[neighbour] = true;

            if(hamiltonPath(neighbour, graph, visited, visitCOunt+1, totalCOunt)){
                return true;
            }
            // Backtrack
            visited[neighbour] = false;
        }
        
    }
    return false;
}

int main(){

    vector<vector<int>> graph = {

        // test case 1
        {1,2,3},
        {0,2},
        {0,1,3},
        {0,2}

        // test case 2
        // {1},
        // {0},
        // {3},
        // {2}
    };

    int vertices = graph.size();
    bool found = false;

    for(int start = 0; start<vertices; start++){
        vector<bool> visited(vertices, false);

        visited[start] = true;
        if(hamiltonPath(start, graph, visited, 1, vertices)){
            found = true;
            break;
        }
    }

    if(found){
        cout<<"hamilton path exists";
    }
    else{
        cout<<"hamilton path does not exist";
    }

    return 0;
}