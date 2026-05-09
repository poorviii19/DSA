#include <iostream>
using namespace std;

int main() {
    // Storing this tree in an array:
    //        1
        //   / \
    //      2   3
    //     / \ / \
    //    4  5 6  7

    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7; // total nodes

    // Print left and right child of each node
    for (int i = 0; i < n; i++) {
        int leftIndex  = 2 * i + 1;
        int rightIndex = 2 * i + 2;

        cout << "Node " << tree[i] << " -> ";

        if (leftIndex < n)
            cout << "Left: " << tree[leftIndex] << "  ";
        else
            cout << "Left: NULL  ";

        if (rightIndex < n)
            cout << "Right: " << tree[rightIndex];
        else
            cout << "Right: NULL";

        cout << "\n";
    }

    return 0;
}