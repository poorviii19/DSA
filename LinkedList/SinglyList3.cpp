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

void insertAtHead(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        tail = newNode;
        head = newNode;
        return;
    }

     tail->next = newNode;
     tail = newNode;
    
    
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

    
    int n;
    cin >> n;
    
    int value;
    cout<<"Enter value to be insert: ";
    
    for(int i = 0; i < n; i++) {
        cin >> value;
        insertAtHead(head, tail, value);
    }
    print(head);
    
    //     while (value != -1) {
        //     insertAtHead(head, value);
        //     cin >> value;
        // }
        
        // “Why did you use -1?
        
        //“It is used as a sentinel value to terminate input when the size is unknown.
        //  However, it assumes -1 is not a valid data input. 
        // If that assumption doesn’t hold, I would switch to size-based input or another termination mechanism.”


// A sentinel value is a predefined value that is not part of normal data, used to terminate a loop or process.

int val;
cout<<"insert teh value you want to insert at tail: "<<endl;

for(int i =0;i<n;i++){
    cin>>val;
    insertAtTail(head, tail, val);
}
print(head);


    return 0;
}