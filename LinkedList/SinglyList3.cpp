#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int value;
    cout<<"Enter value to be insert: ";
    cin>>value;


     while (value != -1) {
        insertAtHead(head, value);
        cin >> value;
    }
    
    print(head);


    return 0;
}