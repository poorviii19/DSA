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

void insertAtHead(Node* &head, Node* &tail,  int data){
    //empty list:
    if(head == NULL){
        Node* temp =  new Node(data);
        head = temp;
        tail = temp;
    }
    else{

        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

 void insertAtTail(Node* &tail, Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{

        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

    }
 }

 void insertAtPosition(Node* &tail, Node* &head, int position, int data){
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail, head,  data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


 }

int main(){

    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    //or
    
    Node* head = NULL;
    Node* tail = NULL;


    
    print(head);
    cout<<getLength(head)<<endl;
    
    insertAtHead(head, tail, 11);
    print(head);
     cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    insertAtHead(head, tail, 13);
    print(head);
     cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    insertAtHead(head, tail, 41);
    print(head);
     cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtTail(tail, head, 25);
    print(head);
 cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    insertAtPosition(tail, head, 3, 100);
    print(head);
     cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    insertAtPosition(tail, head, 1, 200);
    print(head);
    
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    insertAtPosition(tail, head, 7, 300);
    print(head);
     cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}