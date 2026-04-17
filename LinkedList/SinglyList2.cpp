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

    //destructor: for deletion we will use it
    ~Node() {
        int value = this -> data;

        //memory free
        if(this->next != NULL){
            delete next;
            this-> next = NULL;
        }

        cout<<"Memory is free for node with data "<<value<<endl;
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

void deleteNode(int position, Node* & head){

    //deleting first or start node:
    if(position == 1){
        Node* temp = head;
        head =  head->next;
        //memory free the start node
        temp->next = NULL;  //imp
        delete temp;
    }
    else{
        //deleting any middle node or last node:
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr =  curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;  //imp
        delete curr;
    }
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

    deleteNode(6, head);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(3, head);
    print(head);

    return 0;
}