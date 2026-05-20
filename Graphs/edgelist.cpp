#include <iostream>
using namespace std;

struct Edge {
    int src;
    int dest;
};

int main() {

    Edge edges[4];

    edges[0] = {0,1};
    edges[1] = {0,2};
    edges[2] = {1,3};
    edges[3] = {2,3};

    for(int i = 0; i < 4; i++) {
        cout << edges[i].src
             << " -> "
             << edges[i].dest << endl;
    }

    return 0;
}

// Time Complexity: O(E)
// Space Complexity: O(E)