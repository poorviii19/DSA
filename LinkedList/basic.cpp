#include<iostream>
using namespace std;

// 1. Define a struct Node for a singly linked list storing an int
struct Node{
    int data;
    Node* next;
};

int main(){

    // 2. Dynamically create a single node holding value 42 and print it
    Node* node = new Node();
    node->data  = 42;
    node->next =  nullptr;

    cout<<node->data<<endl;

    // 3. Create three nodes manually and link them

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 30;
    second->data = 40;
    third->data = 50;

    first->next = second;
    second->next = third;
    third->next = nullptr;

    cout<<first->data<<endl;
    cout<<first->next->data<<endl;
    cout<<first->next->next->data<<endl;

    // 4. Explicitly mark a node as the last node
    Node* last = new Node();
    last->data = 70;
    last->next = nullptr;

    cout << "Size of int      : " << sizeof(int) << endl;
    cout << "Size of Node*    : " << sizeof(Node*) << endl;
    cout << "Size of Node     : " << sizeof(Node) << endl;
    // Print size of Node
    cout<<sizeof(Node)<<" bytes"<<endl;

    
    return 0;
}