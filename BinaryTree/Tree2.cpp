#include <iostream>
using namespace std;

// Node structure
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data  = val;
        left  = NULL;
        right = NULL;
    }
};

int main() {

    
    // manual creation of nodes:

    
    TreeNode* root  = new TreeNode(1);  // Root node, value = 1
    TreeNode* node2 = new TreeNode(2);  // value = 2
    TreeNode* node3 = new TreeNode(3);  // value = 3
    TreeNode* node4 = new TreeNode(4);  // value = 4
    TreeNode* node5 = new TreeNode(5);  // value = 5

    // Step 2: Connect nodes using pointers
    root->left   = node2;  
    root->right  = node3;  
    node2->left  = node4;  
    node2->right = node5;  

    // Tree now looks like:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    cout << "Root:              " << root->data         << endl; // 1
    cout << "Root's left:       " << root->left->data   << endl; // 2
    cout << "Root's right:      " << root->right->data  << endl; // 3
    cout << "Root->left->left:  " << root->left->left->data  << endl; // 4
    cout << "Root->left->right: " << root->left->right->data << endl; // 5

    return 0;
}