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

    ~Node() {
        cout << "Memory free for node with data " << data << endl;
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


 void deleteNode(Node* &head, Node* &tail, int pos){
    if(head == NULL) return;

    //deleting starting node
   if(pos == 1){
        Node* temp = head;

        if(head->next != NULL){
            head = head->next;
            head->prev = NULL;
        } else {
            head = tail = NULL;
        }

        temp->next = NULL;
        delete temp;
        return;
    }


    Node* curr = head;
    int count = 1;

    while(count < pos && curr != NULL){
        curr = curr->next;
        count++;
    }

    if(curr == NULL) return; // invalid position

    // last node
    if(curr->next == NULL){
        tail = curr->prev;
        tail->next = NULL;
    }
    else{
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
    }

    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
  
 }

int main(){
    Node* head = NULL;
    Node* tail = NULL;


    
    print(head);

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
    
    
    deleteNode(head, tail,  5);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    deleteNode(head, tail, 1);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    deleteNode(head, tail,  5);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}