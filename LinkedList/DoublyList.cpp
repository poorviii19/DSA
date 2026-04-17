#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor:
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }


};


//traversal
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}


//length
int getLength(Node* head){
    int len = 0;
     Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;

    }
    return len;
}

void insertAtHead(Node* &head, int data){
     Node* temp = new Node(data);
     temp->next = head;
     head->prev = temp;
     head = temp;
}

 void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
 }

 void insertAtPosition(Node* &tail, Node* &head, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


 }

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    cout<<getLength(head)<<endl;
    
    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 41);
    print(head);

    insertAtTail(tail, 25);
    print(head);
    
    insertAtPosition(tail, head, 3, 100);
    print(head);
    insertAtPosition(tail, head, 1, 200);
    print(head);
    insertAtPosition(tail, head, 8, 300);
    print(head);

    return 0;
}