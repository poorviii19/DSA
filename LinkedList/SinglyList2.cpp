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

// insert at tail
void insertiontail(Node* &tail, int val){  
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

// insert at position
void insertAtPosition(Node* &head, Node* &tail, int position, int val){

    // insert at beginning
    if(position == 1){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        return;
    }

    Node* curr = head;
    int cnt = 1;

    while(cnt < position - 1 && curr->next != NULL){
        curr = curr->next;
        cnt++;
    }

    // insert at end
    if(curr->next == NULL){
        insertiontail(tail, val);
        return;
    }

    // insert in middle
    Node* temp = new Node(val);
    temp->next = curr->next;
    curr->next = temp;
}

// traversal
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){

    Node* node1 = new Node(10);

    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertiontail(tail, 12);
    insertiontail(tail, 15);

    print(head);

    insertAtPosition(head, tail, 2, 99); // insert at pos 2
    print(head);

    insertAtPosition(head, tail, 1, 5);  // insert at beginning
    print(head);

    insertAtPosition(head, tail, 10, 50); // insert at end (out of range)
    print(head);

    return 0;
}