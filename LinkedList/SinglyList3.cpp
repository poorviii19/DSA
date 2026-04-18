//practice of basic concepts of singly linked list


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

void insertAtPosition(Node* &head, Node* &tail, int pos, int value){
    if(pos == 1){
       
        insertAtHead(head, tail, value);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Move to (pos-1) node
    while(cnt<pos-1 && temp != NULL){
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL){
        cout<<"position out of range"<<endl;
        return;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, value);
        return;

    }
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}




void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


void deleteNode(int pos, Node* &head, Node* &tail){
//edge case
    if(head==NULL){
        cout<<"empty list\n";
        return;
    }
    if(pos==1){
        Node* temp = head;
        head =  head->next;
        temp->next = NULL;  //important to avoid dangling pointer

        if(head == NULL){
            tail = NULL;  //if list becomes empty, update tail as well
        }

        delete temp;
        return;
    }


        // Traverse to position
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;
    while(count<pos && curr != NULL){
        prev = curr;
        curr= curr->next;
        count++;
    }

    //edge case
    if(curr ==NULL){
        cout<<"Position out of range\n";
        return;
    }

    if(curr->next == NULL){
        tail = prev;
        prev->next = NULL;
        delete curr;
        return;
    }

     prev->next = curr->next;
     delete curr;
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
    cout<<"insert to value you want to insert at tail: "<<endl;

    for(int i =0;i<n;i++){
        cin>>val;
        insertAtTail(head, tail, val);
    }
    print(head);



    int position, data;
    cout << "Enter position and value:\n";
    cin >> position >> data;

    insertAtPosition(head, tail, position, data);

    print(head);
    
    deleteNode(position, head, tail);
    print(head);



    return 0;
}