#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void iterativeDFS(int start,
                  const vector<vector<int>>& graph) {

    int vertices = graph.size();

    vector<bool> visited(vertices, false);

    stack<int> st;

    st.push(start);

    visited[start] = true;

    while(!st.empty()) {

        int curr = st.top();

        st.pop();

        cout << curr << "->";

        // for(int neigh : graph[curr]) {

        //     if(!visited[neigh]) {

        //         st.push(neigh);

        //         visited[neigh] = true;
        //     }
        // }

        // to match the recursive dfs order, we need to push neighbors in reverse order

        for(int i = graph[curr].size() - 1; i >= 0; i--) {

            int neigh = graph[curr][i];

            if(!visited[neigh]) {

                st.push(neigh);

                visited[neigh] = true;
            }
        }
    }
}

int main() {

    vector<vector<int>> graph = {

        {1,2,3},
        {4,5},
        {0},
        {0},
        {1},
        {1}
    };

    iterativeDFS(0, graph);

    return 0;
}