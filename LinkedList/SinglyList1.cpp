#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// insertion at head
//reverse ordered list
// void insertionhead(Node* &head, int val){
//     Node* temp = new Node(val);
//     temp->next = head;
//     head = temp;
// }


void insertiontail(Node* &tail, int val){  
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;  //or tail->next
}

// traversal
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    // create first node
    Node* node1 = new Node(10);

    cout << node1->data << endl;
    cout << node1->next << endl;

    // head
    Node* head = node1;
    Node* tail = node1;

    print(head);

    // insertion
    // insertionhead(head, 12);
    insertiontail(tail, 12);
    print(head);
    // insertiontail(head, 15);
    insertiontail(tail, 15);

    print(head);

    return 0;
}