#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// insert at tail
void insertionTail(Node* &tail, int val){
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

// print list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// insert at position
void insertAtPos(Node* &head, int position, int val){

    // insert at beginning
    if(position == 1){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        return;
    }

    Node* curr = head;
    int cnt = 1;

    while(cnt < position-1 && curr->next != NULL){
        curr = curr->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(val);
    nodeToInsert->next = curr->next;
    curr->next = nodeToInsert;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertionTail(tail, 12);
    insertionTail(tail, 15);

    print(head);

    insertAtPos(head, 2, 99);

    print(head);

    return 0;
}